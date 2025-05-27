/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:33:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/26 21:20:16 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(std::string prenom){this->_lastName = prenom;}

void Contact::setlastName(std::string nom){this->_name = nom;}

void Contact::setNickName(std::string surnom){this->_nickName = surnom;}

void Contact::setPhoneNum(std::string numero){this->_phoneNum = numero;}

void Contact::setSecret(std::string secret){this->_secret = secret;}

std::string Contact::getFirstName() const {return this->_lastName;}

std::string Contact::getlastName() const {return this->_name;}

std::string Contact::getNickName() const {return this->_nickName;}

std::string Contact::getPhoneNum() const {return this->_phoneNum;}

std::string Contact::getSecret() const {return this->_secret;}
