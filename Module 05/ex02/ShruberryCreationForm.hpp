/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:45:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/17 17:51:59 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShruberryCreationForm : public AForm
{
private:
	std::string _target;

	ShruberryCreationForm();

public:
	ShruberryCreationForm(std::string target);
	ShruberryCreationForm(const ShruberryCreationForm &obj);
	ShruberryCreationForm &operator=(const ShruberryCreationForm &obj);
	~ShruberryCreationForm();

	class FailedToCreateOutFile : public std::exception
	{
	public:
		const char *what() const throw();
	};

	virtual void performAction() const;
};

#endif