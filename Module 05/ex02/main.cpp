/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 17:57:03 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		AForm *form1 = new PresidentialPardonForm("Dani Alves");
		AForm *form2 = new RobotomyRequestForm("Haaland");
		AForm *form3 = new ShrubberyCreationForm("Xavi");

		std::cout << "================================================" << std::endl;

		Bureaucrat Messi("Messi", 1);
		Bureaucrat Raphinha("Raphinha", 20);
		Bureaucrat Lewa("Lewa", 120);

		std::cout << "================================================" << std::endl;

		Messi.executeForm(*form1);
		Raphinha.signForm(*form1);
		Messi.signForm(*form1);
		Lewa.signForm(*form1);
		std::cout << *form1 << std::endl;
		Lewa.executeForm(*form1);
		Messi.executeForm(*form1);

		std::cout << "=================================================" << std::endl;

		Raphinha.signForm(*form2);
		std::cout << *form2 << std::endl;
		Messi.executeForm(*form2);

		std::cout << "=================================================" << std::endl;

		Lewa.signForm(*form3);
		std::cout << *form3 << std::endl;
		Messi.executeForm(*form3);

		std::cout << "=================================================" << std::endl;

		delete form1;
		delete form2;
		delete form3;
	}
	catch (std::exception &e)
	{ std::cerr << "[ Exception ] : " << e.what() << std::endl; }

	return 0;
}