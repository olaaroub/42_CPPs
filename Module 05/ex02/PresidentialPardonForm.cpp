/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:01:30 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/16 22:22:23 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "[ PresidentialPardonForm ] parameterized constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	: AForm(obj), _target(obj._target)
{
	std::cout << "[ PresidentialPardonForm ] copy constructor called!" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "[ PresidentialPardonForm ] assignment operator called!" << std::endl;

	if (this != &obj)
	{
		AForm::operator=(obj);
		_target = obj._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getFormStatus() == false)
		throw AForm::FormNotSigned();
	if (this->getExecGrade() < executor.getGrade())
		;
}
