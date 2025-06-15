/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:14:26 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/15 23:17:28 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade)
	: _name(name), _signGrade(signGrade),
	  _execGrade(execGrade), _formStat(false)
{
	std::cout << "[ AForm ] parameterized construcor for " << _name << " called!" << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw AForm::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw AForm::GradeTooLowException();

	std::cout << "AForm " << _name << " created with signGrade and exeGrade of: "
			  << _signGrade << ", " << _execGrade << "." << std::endl;
}

AForm::AForm(const AForm &obj)
	: _name(obj._name), _signGrade(obj._signGrade),
	  _execGrade(obj._execGrade), _formStat(false)
{
	std::cout << "[ AForm ] copy constructor called!" << std::endl;
}

AForm &AForm::operator=(const AForm &obj)
{
	std::cout << "[ AForm ] copy assignment operator called!" << std::endl;
	if (this != &obj)
		_formStat = obj._formStat;
	return *this;
}

AForm::~AForm()
{
	std::cout << "[ AForm ] destructor for " << _name << " called!" << std::endl;
}

const std::string &AForm::getName() const { return _name; }
bool AForm::getFormStatus() const { return _formStat; }
int AForm::getSignGrade() const { return _signGrade; }
int AForm::getExecGrade() const { return _execGrade; }

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
	{
		_formStat = true;
		std::cout << bureaucrat.getName() << " signs " << _name << "." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, const AForm &obj)
{
	output << "Form Name: " << obj.getName()
		   << ", Sign Grade: " << obj.getSignGrade()
		   << ", Exec Grade: " << obj.getExecGrade()
		   << ", Status: " << (obj.getFormStatus() ? "Signed" : "Not Signed");
	return output;
}