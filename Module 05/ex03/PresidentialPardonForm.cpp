/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:01:30 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 17:49:33 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	OCF_OUTPUT("[ PresidentialPardonForm ] parameterized constructor called!");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	: AForm(obj), _target(obj._target)
{
	OCF_OUTPUT("[ PresidentialPardonForm ] copy constructor called!");
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	OCF_OUTPUT("[ PresidentialPardonForm ] assignment operator called!");

	if (this != &obj)
	{
		AForm::operator=(obj);
		_target = obj._target;
	}
	return *this;
}

void PresidentialPardonForm::performAction() const
{

	std::cout << "[ " << _target << " ]: has been pardoned by Zaphod beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	OCF_OUTPUT("[ PresidentialPardonForm ] destructor called!");
}