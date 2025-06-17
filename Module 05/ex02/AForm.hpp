/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 23:10:31 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 15:16:01 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

#ifndef DEBUG_MODE
#define DEBUG_MODE 0
#endif

#if DEBUG_MODE
#define OCF_OUTPUT(x) std::cout << x << std::endl
#else
#define OCF_OUTPUT(x)
#endif

class AForm
{
private:
	const std::string _name;
	const int _signGrade;
	const int _execGrade;
	bool _formStat;

	AForm();

public:
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj);
	~AForm();

	const std::string &getName() const;
	bool getFormStatus() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);

	virtual void execute(const Bureaucrat &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FormAlreadySigned : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FormNotSigned : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &output, const AForm &obj);

#endif