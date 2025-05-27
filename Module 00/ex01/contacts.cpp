/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:33:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/27 19:08:27 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(std::string lastName){this->_lastName = lastName;}

void Contact::setlastName(std::string firstName){this->_name = firstName;}

void Contact::setNickName(std::string nickName){this->_nickName = nickName;}

void Contact::setPhoneNum(std::string phoneNum){this->_phoneNum = phoneNum;}

void Contact::setSecret(std::string secret){this->_secret = secret;}

std::string Contact::getFirstName() const {return this->_lastName;}

std::string Contact::getlastName() const {return this->_name;}

std::string Contact::getNickName() const {return this->_nickName;}

std::string Contact::getPhoneNum() const {return this->_phoneNum;}

std::string Contact::getSecret() const {return this->_secret;}
