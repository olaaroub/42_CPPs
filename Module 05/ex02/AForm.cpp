/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:14:26 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 14:54:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("[ Grade too low ]");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("[ Grade too high ]");
}

const char *AForm::FormAlreadySigned::what() const throw()
{
	return ("[ Form already signed ]");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("[ Form not signed ]");
}

AForm::AForm(std::string name, int signGrade, int execGrade)
	: _name(name), _signGrade(signGrade),
	  _execGrade(execGrade), _formStat(false)
{
	OCF_OUTPUT("[ AForm ] parameterized construcor for " << _name << " called!");
	if (_signGrade < 1 || _execGrade < 1)
		throw AForm::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw AForm::GradeTooLowException();

	std::cout << "AForm " << _name << " created with signGrade and exeGrade of: "
			  << _signGrade << ", " << _execGrade << "." << std::endl;
}

AForm::AForm(const AForm &obj)
	: _name(obj._name), _signGrade(obj._signGrade),
	  _execGrade(obj._execGrade), _formStat(obj._formStat)
{
	OCF_OUTPUT("[ AForm ] copy constructor called!");
}

AForm &AForm::operator=(const AForm &obj)
{
	OCF_OUTPUT("[ AForm ] copy assignment operator called!");
	if (this != &obj)
		_formStat = obj._formStat;
	return *this;
}

AForm::~AForm()
{
	OCF_OUTPUT("[ AForm ] destructor for " << _name << " called!");
}

const std::string &AForm::getName() const { return _name; }
bool AForm::getFormStatus() const { return _formStat; }
int AForm::getSignGrade() const { return _signGrade; }
int AForm::getExecGrade() const { return _execGrade; }

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (_formStat == true)
		throw AForm::FormAlreadySigned();
	if (bureaucrat.getGrade() <= _signGrade)
		_formStat = true;
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