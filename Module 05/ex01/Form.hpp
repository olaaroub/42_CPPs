/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 23:10:31 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/15 20:13:01 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
	const std::string _name;
	const int _signGrade;
	const int _execGrade;
	bool _formStat;

	Form();

public:
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &obj);
	Form &operator=(const Form &obj);
	~Form();

	const std::string &getName() const;
	bool getFormStatus() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);

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

std::ostream &operator<<(std::ostream &output, const Form &obj);

#endif