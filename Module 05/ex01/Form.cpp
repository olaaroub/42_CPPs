/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:14:26 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/16 16:52:22 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooLowException::what() const throw()
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
	std::cout << "[ Form ] parameterized construcor for " << _name << " called!" << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();

	std::cout << "Form " << _name << " created with signGrade and exeGrade of: "
			  << _signGrade << ", " << _execGrade << "." << std::endl;
}

Form::Form(const Form &obj)
	: _name(obj._name), _signGrade(obj._signGrade),
	  _execGrade(obj._execGrade), _formStat(false)
{
	std::cout << "[ Form ] copy constructor called!" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
	std::cout << "[ Form ] copy assignment operator called!" << std::endl;
	if (this != &obj)
		_formStat = obj._formStat;
	return *this;
}

Form::~Form()
{
	std::cout << "[ Form ] destructor for " << _name << " called!" << std::endl;
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