/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:41:59 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 17:59:15 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#ifndef DEBUG_MODE
#define DEBUG_MODE 0
#endif

#if DEBUG_MODE
#define OCF_OUTPUT(x) std::cout << x << std::endl
#else
#define OCF_OUTPUT(x)
#endif
class Intern
{
public:
	Intern();
	Intern(const Intern &obj);
	Intern &operator=(const Intern &obj);
	~Intern();

	AForm *makeForm(std::string formName, std::string formTarget);
	AForm *getForm(std::string formName, std::string formTarget);

	class FormNotFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif