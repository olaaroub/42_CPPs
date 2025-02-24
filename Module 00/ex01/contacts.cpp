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

void Contact::set_prenom(std::string prenom){this->prenom = prenom;}

void Contact::set_nom(std::string nom){this->nom = nom;}

void Contact::set_surnom(std::string surnom){this->surnom = surnom;}

void Contact::set_numero(std::string numero){this->numero = numero;}

void Contact::set_secret(std::string secret){this->secret = secret;}

std::string Contact::get_prenom(){return this->prenom;}

std::string Contact::get_nom(){return this->nom;}

std::string Contact::get_surnom(){return this->surnom;}

std::string Contact::get_numero(){return this->numero;}

std::string Contact::get_secret(){return this->secret;}
