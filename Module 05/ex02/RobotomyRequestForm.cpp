/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:16:59 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 15:15:38 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	OCF_OUTPUT("[ RobotomyRequestForm ] constructor called!");
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
	: AForm(obj), _target(obj._target)
{
	OCF_OUTPUT("[ RobotomyRequestForm ] copy constructor called!");
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	OCF_OUTPUT("[ RobotomyRequestForm ] assignment operator called!");
	if (this != &obj)
	{
		AForm::operator=(obj);
		_target = obj._target;
	}
	return *this;
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getFormStatus() == false)
		throw AForm::FormNotSigned();
	if (this->getExecGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();

	srand(time(0));
	if (rand() % 2 == 0)
	{
		std::cout << "Driiiiiiiilling nooooooises ... " << std::endl;
		std::cout << "[ " << _target << " ] : has been robotomized successfully." << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	OCF_OUTPUT("[ RobotomyRequestForm ] destructor called!");
}