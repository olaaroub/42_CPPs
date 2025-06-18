/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 17:48:56 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int main()
{

	try
	{
		Bureaucrat b3("Bureaucrat 1", 8);
		Bureaucrat b2("Bureaucrat 2", 150);
		Form form("FORM 1", 10, 40);

		std::cout << "===============================" << std::endl;

		std::cout << form << std::endl;

		b2.signForm(form); // grade too low

		b3.signForm(form); // Form is Signed

		std::cout << form << std::endl;

		b3.signForm(form); // Already Signed

		std::cout << "===============================" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "[ Exception ] : " << e.what() << std::endl;
	}
	return (0);
}