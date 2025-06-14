/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:00:33 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/14 23:23:43 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;

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

	void incrementGrade();
	void decrementGrade();

	void signForm(const Form& form);
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);

#endif