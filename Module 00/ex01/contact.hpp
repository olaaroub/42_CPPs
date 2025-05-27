/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:35:48 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/26 21:20:33 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {


public:

    void setFirstName(std::string prenom);
    void setlastName(std::string nom);
    void setNickName(std::string surnom);
    void setPhoneNum(std::string numero);
    void setSecret(std::string secret);
    std::string getFirstName() const;
    std::string getlastName() const;
    std::string getNickName() const;
    std::string getPhoneNum() const;
    std::string getSecret() const;

private:

    std::string _lastName;
    std::string _name;
    std::string _nickName;
    std::string _phoneNum;
    std::string _secret;

};

#endif