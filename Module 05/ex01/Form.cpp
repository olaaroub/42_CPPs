/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:14:26 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 14:45:51 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooLowException::what() const throw()
{
	return ("[ Grade too low ]");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("[ Grade too high ]");
}

const char *Form::FormAlreadySigned::what() const throw()
{
	return ("[ Form already signed ]");
}

Form::Form(std::string name, int signGrade, int execGrade)
	: _name(name), _signGrade(signGrade),
	  _execGrade(execGrade), _formStat(false)
{
	OCF_OUTPUT("[ Form ] parameterized construcor for " << _name << " called!");
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();

	std::cout << "Form " << _name << " created with signGrade and exeGrade of: "
			  << _signGrade << ", " << _execGrade << "." << std::endl;
}

Form::Form(const Form &obj)
	: _name(obj._name), _signGrade(obj._signGrade),
	  _execGrade(obj._execGrade), _formStat(obj._formStat)
{
	OCF_OUTPUT("[ Form ] copy constructor called!");
}

Form &Form::operator=(const Form &obj)
{
	OCF_OUTPUT("[ Form ] copy assignment operator called!");
	if (this != &obj)
		_formStat = obj._formStat;
	return *this;
}

Form::~Form()
{
	OCF_OUTPUT("[ Form ] destructor for " << _name << " called!");
}

const std::string &Form::getName() const { return _name; }
bool Form::getFormStatus() const { return _formStat; }
int Form::getSignGrade() const { return _signGrade; }
int Form::getExecGrade() const { return _execGrade; }

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_formStat == true)
		throw Form::FormAlreadySigned();
	if (bureaucrat.getGrade() <= _signGrade)
		_formStat = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, const Form &obj)
{
	output << "Form Name: " << obj.getName()
		   << ", Sign Grade: " << obj.getSignGrade()
		   << ", Exec Grade: " << obj.getExecGrade()
		   << ", Status: " << (obj.getFormStatus() ? "Signed" : "Not Signed");
	return output;
}