/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:47:06 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 01:07:42 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <stdlib.h>

const char *Intern::FormNotFound::what() const throw()
{
	return ("[ The form you are requesting doesn't exist! ]");
}

Intern::Intern() { OCF_OUTPUT("[ Intern ] Default constructor called!"); }

Intern::Intern(const Intern &obj)
{
	(void)obj;
	OCF_OUTPUT("[ Intern ] Copy constructor called!");
}

Intern &Intern::operator=(const Intern &obj)
{
	if (this != &obj)
		;
	return *this;
}

Intern::~Intern() { OCF_OUTPUT("[ Intern ] Destructor called!"); }

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	if (formName.empty() || formTarget.empty())
	{
		std::cerr << "Form name or target cannot be empty!" << std::endl;
		throw FormNotFound();
	}
	std::string lowerName;
	for (size_t i = 0; i < formName.length(); i++)
		lowerName += std::tolower(formName[i]);
	std::string names[] = {"robotomy request", "shrubbery creation", "presidential pardon"};

	int i = 0;
	for (; i < 3; i++)
		if (lowerName == names[i])
			break;

	switch (i)
	{
	case 0:
		std::cout << "Intern creates robotomy request form" << std::endl;
		return new RobotomyRequestForm(formTarget);

	case 1:
		std::cout << "Intern creates shrubbery creation form" << std::endl;
		return new ShrubberyCreationForm(formTarget);
	case 2:
		std::cout << "Intern creates presidential pardon form" << std::endl;
		return new PresidentialPardonForm(formTarget);
	default:
		throw FormNotFound();
	}

	return NULL;
}