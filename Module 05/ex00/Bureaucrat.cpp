/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:24:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/14 00:09:47 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "[ Bureaucrat ] parameterized constructor called!" << std::endl;
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

const std::string Bureaucrat::getName() const { return _name; }

const unsigned int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade() { _grade++; }
void Bureaucrat::decrementGrade() { _grade--; }

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << " bureaucrat grade " << obj.getGrade();
	return (output);
}
