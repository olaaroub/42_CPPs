/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:24:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/14 23:28:10 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "[ Bureaucrat ] parameterized constructor for " << _name << " called!" << std::endl;

	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << "Bureaucrat " << _name << " created with grade of " << _grade << "." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
	std::cout << "[ Bureaucrat ] copy constructor called!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "[ Bureaucrat ] copy assignment operator called!" << std::endl;
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

void Bureaucrat::signForm(const Form &form)
{
	if(_grade > form.getRts())
		std::cout << _name << " cannot sign " << form.getName() << " because their grade is too low." << std::endl;
	else
		std::cout << _name << " signs " << form.getName() << "." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor for " << _name << " called!" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (output);
}
