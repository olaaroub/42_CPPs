/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:33:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/21 16:28:41 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(std::string prenom){this->_lastName = prenom;}

void Contact::setlastName(std::string nom){this->_name = nom;}

void Contact::setNickName(std::string surnom){this->_nickName = surnom;}

void Contact::setPhoneNum(std::string numero){this->_phoneNum = numero;}

void Contact::setSecret(std::string secret){this->_secret = secret;}

std::string Contact::getFirstName(){return this->_lastName;}

std::string Contact::getlastName(){return this->_name;}

std::string Contact::getNickName(){return this->_nickName;}

std::string Contact::getPhoneNum(){return this->_phoneNum;}

std::string Contact::getSecret(){return this->_secret;}
