/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 23:10:31 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/14 23:20:56 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
private:
	const std::string _name;
	bool _signed;
	const int requiredToSign;
	const int requiredToExec;

public:
	Form(std::string name, int rts, int rte);
	Form(const Form &obj);
	Form &operator=(const Form &obj);
	~Form();

	const std::string& getName()const ;
	int getRts() const;
	int getRte()const;

	void beSigned(const Bureaucrat& Bureaucrat);

};

std::ostream &operator<<(const std::ostream &output, const Form &obj);

#endif