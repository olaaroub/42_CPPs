let game=['MainUsername', 'player2'];
let Gameid;
let player1name = '';
let player2name = '';
let endgame = false;

function runGame(){
    const canvas = document.getElementById('gameCanvas');
const ctx = canvas.getContext('2d');

let paddleWidth, paddleHeight, paddleMargin, ballSize, fontSize, leftPaddleY, rightPaddleY;
let scorePlayer1 = 0, scorePlayer2 = 0, leftPaddleDirection = -1, rightPaddleDirection = -1;
let speedFactorX;
let speedFactorY;
let gameState = 'play';
let MaxPaddleY;
let gamecounter = 0;
let message = document.querySelector('.po');
let gameendscore = 3;
let winner;

let balls = [
    { x: canvas.width / 2, y: canvas.height / 2, xSpeed: 2, ySpeed: 2, size: ballSize }
]; 
    // Called when the window is resized && when the page is first loaded

    function randomdirectionball() {
        let x = Math.floor((Math.random() * 10) + 1);
        if (x % 4 == 3 ){
            balls = [
                { x: canvas.width / 2, y: canvas.height / 2, xSpeed: 2, ySpeed: 2, size: ballSize }
            ];
        }else if (x % 4 == 2){
            balls = [
                { x: canvas.width / 2, y: canvas.height / 2, xSpeed: 2, ySpeed: -2, size: ballSize }
            ];
        }else if (x % 4 == 1){
            balls = [
                { x: canvas.width / 2, y: canvas.height / 2, xSpeed: -2, ySpeed: 2, size: ballSize }
            ];false
        }else{
            balls = [
                { x: canvas.width / 2, y: canvas.height / 2, xSpeed: -2, ySpeed: -2, size: ballSize }
            ];
        }
    }
    // endtournement
    function resizeCanvas() {
        canvas.width = window.innerWidth * 0.8;
        canvas.height = window.innerHeight * 0.6;
        paddleWidth = canvas.width * 0.02; // 2%
        paddleHeight = canvas.height * 0.25; // 25%
        paddleMargin = canvas.width * 0.02; 
        ballSize = canvas.width * 0.04;
        fontSize = canvas.width * 0.08; 
		leftPaddleY = canvas.height / 2 - paddleHeight / 2;
		rightPaddleY = canvas.height / 2 - paddleHeight / 2;
        MaxPaddleY = canvas.height - paddleHeight ;
        speedFactorX = canvas.width * 0.0015;
		speedFactorY = canvas.height * 0.0015;
        randomdirectionball();
        draw(); // Redraw everything after resizing
    }

	// Draw paddles, balls, scores and center line
	function draw() {
        ctx.clearRect(0, 0, canvas.width, canvas.height);

        ctx.fillStyle = 'white';
    	ctx.fillRect(paddleMargin, leftPaddleY, paddleWidth, paddleHeight); // Draw left paddle
        ctx.fillRect(canvas.width - paddleWidth - paddleMargin, rightPaddleY, paddleWidth, paddleHeight); // Draw right paddle
        balls.forEach(ball => {
            ctx.fillRect(ball.x, ball.y, ball.size, ball.size);
        }); // Draw each ball

		// Draw center line
        ctx.beginPath();
        ctx.setLineDash([canvas.width * 0.005, canvas.width * 0.015]);
        ctx.moveTo(canvas.width / 2, 0);
        ctx.lineTo(canvas.width / 2, canvas.height);
        ctx.strokeStyle = 'white';
        ctx.stroke();
        drawScore();
    }

	function drawScore() {
		const scoreFontSize = fontSize + 20;
		ctx.font = `${scoreFontSize}px 'Press Start 2P'`;
		const scorePosY = scoreFontSize;
		let score1Text = scorePlayer1.toString();
		let score2Text = scorePlayer2.toString();
        
		const score1Width = ctx.measureText(score1Text).width;

		const score1PosX = (canvas.width / 2) - score1Width - (ballSize * 2);
		const score2PosX = (canvas.width / 2) + (ballSize * 2); // Use the same spacing from the center as scorePlayer1

		ctx.fillText(score1Text, score1PosX, scorePosY);
		ctx.fillText(score2Text, score2PosX, scorePosY);
	}

    function animate() {
        if (gameState == 'start'){
		// Move balls
		balls.forEach((ball, index) => {
			ball.x += ball.xSpeed * speedFactorX;
			ball.y += ball.ySpeed * speedFactorY;
			// Collision with top and bottom bounds
			if (ball.y <= 0 || (ball.y + ball.size) >= canvas.height) {
				ball.ySpeed *= -1;
			}
	
			// Collision with paddles
			if (ball.xSpeed < 0 && ball.x <= paddleMargin + paddleWidth && ball.x > paddleMargin && ball.y + ball.size > leftPaddleY && ball.y < leftPaddleY + paddleHeight) {
				ball.xSpeed *= -1;
				ball.x = paddleMargin + paddleWidth + 1;
			} else if (ball.xSpeed > 0 && ball.x + ball.size >= canvas.width - paddleWidth - paddleMargin && ball.x + ball.size < canvas.width - paddleMargin && ball.y + ball.size > rightPaddleY && ball.y < rightPaddleY + paddleHeight) {
				ball.xSpeed *= -1;
				ball.x = canvas.width - paddleWidth - paddleMargin - ball.size - 1;
			}
			// Reset ball if it goes out of bounds
			if (ball.x <= 0 || (ball.x + ball.size) >= canvas.width) {
                if (ball.x <= 0){
                    scorePlayer2 += 1;
                }
                else{
                    scorePlayer1 += 1;
                }
                ball.x = canvas.width / 2 - ball.size / 2;
				ball.y = canvas.height / 2 - ball.size / 2;
                if (scorePlayer1 == gameendscore || scorePlayer2 == gameendscore){
                    gamecounter += 1;
                    if (scorePlayer1 == gameendscore){
                        winner = player1name;
                    }else{
                        winner = player2name;
                    }
                    message.innerHTML = "The winner : " + winner;
                    let data = {
                        'gameid': Gameid,
                        'winner': winner
                    };
                    const jwtToken = localStorage.getItem('jwt');
                    const jwtTokenCookie = getCookie('jwt');
                    
                    let headers = {
                        'Content-Type': 'application/json', // Set Content-Type header to application/json
                    };
                    if (jwtToken) {
                        headers['Authorization'] = `Bearer ${jwtToken}`;
                    } else if (jwtTokenCookie) {
                        headers['Authorization'] = `Bearer ${jwtTokenCookie}`;
                    }
                    fetch('http://localhost:83/game/finish/', {
                    method: 'POST',
                    headers: headers,
                    body: JSON.stringify(data)
                    }).then(response => {
                        if (response.status === 201) {
                            message.innerHTML = 'The Winner of the game :' + winner;
                            setTimeout(() => {  window.history.pushState({}, "", "/game_b"); urlLocationHandler(); }, 5000);
                        } else {
                            throw new Error("Error: finishing the game");
                        }
                    }).catch(error => {
                        alert(error);
                        window.history.pushState({}, "", "/game_b");
                        urlLocationHandler();
                    });
                }
                gameState = 'pause';
        }
		});
		draw(); // Redraw everything
    }else{
        if (gamecounter == 0 && scorePlayer1 == 0 && scorePlayer2 == 0){
        player1name = game[0];
        player2name = game[1];
        }
    }
		requestAnimationFrame(animate); // Next animation frame
}
const eventx = document.addEventListener('keydown', (e) => {
    if (gamecounter == 0 && endgame == false){
    if (e.key == 'Enter' && gameState != "play") {
        gameState = 'start';
        if (scorePlayer1 == gameendscore || scorePlayer2 == gameendscore){
            gameState = "play";
        }
    }else if (e.key == "Enter"){
        message.innerHTML = player1name + "  VS  " + player2name;
        gameState = "pause";
    }
    const normalizedPaddleSpeed = canvas.height * 0.02;
    if (gameState == 'start') {
        if (e.key == 'w') {
            if ((leftPaddleY + leftPaddleDirection * normalizedPaddleSpeed) >= 0){
                leftPaddleY += 2*(leftPaddleDirection * normalizedPaddleSpeed);
            }
        } 
        if (e.key == 's') {
            if ((leftPaddleY - leftPaddleDirection * normalizedPaddleSpeed) <= MaxPaddleY){
                leftPaddleY -= 2*(leftPaddleDirection * normalizedPaddleSpeed);
            }
        }
        if (e.key == 'ArrowUp') {
            if((rightPaddleY + rightPaddleDirection * normalizedPaddleSpeed) >= 0){
                rightPaddleY += 2*(rightPaddleDirection * normalizedPaddleSpeed);
            }
        } 
        if (e.key == 'ArrowDown') { 
            if ((rightPaddleY - rightPaddleDirection * normalizedPaddleSpeed) <= MaxPaddleY){
                rightPaddleY -= 2* (rightPaddleDirection * normalizedPaddleSpeed);
            }
        } 
        }
    }
});
    window.addEventListener('resize', resizeCanvas);
    resizeCanvas();
    animate(); // Start the animation loop.


};


function gamestart(){
    endgame = false;
    const form = document.getElementById('TournementForm');
    const formcontainer = document.getElementById("TournementContainer");
    game[1] = document.getElementById('player2').value;
    const data = {
        player2: game[1],
      };
    const jwtToken = localStorage.getItem('jwt');
    const jwtTokenCookie = getCookie('jwt');

    let headers = {
        'Content-Type': 'application/json', // Set Content-Type header to application/json
    };
    if (jwtToken) {
        headers['Authorization'] = `Bearer ${jwtToken}`;
    } else if (jwtTokenCookie) {
        headers['Authorization'] = `Bearer ${jwtTokenCookie}`;
    }

    fetch('http://localhost:83/game/register/', {
        method: 'POST',
        headers: headers,
        body: JSON.stringify(data)
    }).then(response => {
        if (response.status === 201) {
        return response.json();
        } else {
        throw new Error("Try to Entre unique name , different than the Mainplayer username !");
        }
    }).then(data => {
        console.log(data);
        Gameid = data.gameid;
        game[0] = data.player1;
        player1name = game[0];
        player2name = game[1];
        console.log(Gameid);
    }).catch(error => {
        alert(error);
        endgame = true;
        window.history.pushState({}, "", "/game_b");
        urlLocationHandler();
    });
    form.style.display = 'none';
    formcontainer.innerHTML = '<div id="game"><canvas id="gameCanvas"></canvas></div><div id="xx"><p class="po" data-i18n="press">Press enter to start</p></div>';
    runGame();
};

function gameLaunch() {
    window.history.pushState({}, "", "/game");
    urlLocationHandler();
}

function tourLaunch() {
    window.history.pushState({}, "", "/tournement");
    urlLocationHandler();
}