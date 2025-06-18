/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:41:59 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 01:11:13 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &obj);
	Intern &operator=(const Intern &obj);
	~Intern();

	AForm *makeForm(std::string formName, std::string formTarget);

	class FormNotFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif