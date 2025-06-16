/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 23:10:31 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/16 16:59:13 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
class Bureaucrat;

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