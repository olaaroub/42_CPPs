import json
import base64
import hashlib
import hmac
from datetime import datetime, timedelta
import os

def token_generation(userd):
    header = {
        'typ': 'JWT',
        'alg': 'HS256'
    }
    encoded_header = base64.urlsafe_b64encode(json.dumps(header).encode('utf-8')).decode('utf-8').rstrip('=')

    payload = {
        'user': {
            'id': str(userd.id), 
            'username': userd.username,
            'double_auth': userd.double_auth,
            'status': userd.status,
        },
        'exp': datetime.timestamp(datetime.utcnow() + timedelta(days=1)),
    }
    encoded_payload = base64.urlsafe_b64encode(json.dumps(payload).encode('utf-8')).decode('utf-8').rstrip('=')

    to_sign = f"{encoded_header}.{encoded_payload}"

    secret_key = os.environ.get("JWT_SECRET", "default_secret").encode('utf-8')
    signature = hmac.new(secret_key, to_sign.encode('utf-8'), hashlib.sha256).digest()
    encoded_signature = base64.urlsafe_b64encode(signature).decode('utf-8').rstrip('=')

    jwt_token = f"{to_sign}.{encoded_signature}"

    return jwt_token

def token_decode(jwt_token):
    parts = jwt_token.split('.')
    if len(parts) != 3:
        raise ValueError("Invalid JWT token")

    encoded_header, encoded_payload, encoded_signature = parts
    decoded_header = json.loads(base64.urlsafe_b64decode(encoded_header + "==").decode('utf-8'))
    decoded_payload = json.loads(base64.urlsafe_b64decode(encoded_payload + "==").decode('utf-8'))

    secret_key = os.environ.get("JWT_SECRET", "default_secret").encode('utf-8')
    to_verify = f"{encoded_header}.{encoded_payload}"

    expected_signature = hmac.new(secret_key, to_verify.encode('utf-8'), hashlib.sha256).digest()
    decoded_signature = base64.urlsafe_b64decode(encoded_signature + "==")

    if not hmac.compare_digest(decoded_signature, expected_signature):
        raise ValueError("Invalid token signature")

    if 'exp' in decoded_payload and datetime.utcfromtimestamp(decoded_payload['exp']) < datetime.utcnow():
        raise ValueError("Token has expired")

    return decoded_payload
    