/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:24:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 14:55:39 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[ Grade too low ]");
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[ Grade too high ]");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	OCF_OUTPUT("[ Bureaucrat ] parameterized constructor for " << _name << " called!");

	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << "Bureaucrat " << _name << " created with grade of " << _grade << "." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
	OCF_OUTPUT("[ Bureaucrat ] copy constructor called!");
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	OCF_OUTPUT("[ Bureaucrat ] copy assignment operator called!");
	if (this != &obj)
	{
		_grade = obj._grade;
	}
	return *this;
}

const std::string &Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade()
{
	if (--_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (++_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << _name << " couldn't sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't execute " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::~Bureaucrat()
{
	OCF_OUTPUT("Destructor for " << _name << " called!");
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (output);
}
