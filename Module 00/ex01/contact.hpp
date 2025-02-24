/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:35:48 by olaaroub          #+#    #+#             */
/*   Updated: 2025/02/22 18:28:50 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {


public:

    void set_prenom(std::string prenom);
    void set_nom(std::string nom);
    void set_surnom(std::string surnom);
    void set_numero(std::string numero);
    void set_secret(std::string secret);
    std::string get_prenom();
    std::string get_nom();
    std::string get_surnom();
    std::string get_numero();
    std::string get_secret();

private:

    std::string _prenom;
    std::string _nom;
    std::string _surnom;
    std::string _numero;
    std::string _secret;

};

#endif