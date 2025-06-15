/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:00:33 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/15 20:15:37 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
// class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(Form &form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("[ Grade too high ]");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("[ Grade too low ]");
		}
	};
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);

#endif