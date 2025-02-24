/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:33:36 by olaaroub          #+#    #+#             */
/*   Updated: 2025/02/22 20:10:37 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_prenom(std::string prenom){this->_prenom = prenom;}

void Contact::set_nom(std::string nom){this->_nom = nom;}

void Contact::set_surnom(std::string surnom){this->_surnom = surnom;}

void Contact::set_numero(std::string numero){this->_numero = numero;}

void Contact::set_secret(std::string secret){this->_secret = secret;}

std::string Contact::get_prenom(){return this->_prenom;}

std::string Contact::get_nom(){return this->_nom;}

std::string Contact::get_surnom(){return this->_surnom;}

std::string Contact::get_numero(){return this->_numero;}

std::string Contact::get_secret(){return this->_secret;}
