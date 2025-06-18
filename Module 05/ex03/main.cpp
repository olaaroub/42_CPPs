/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 18:00:59 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <unistd.h>

int main()
{

	try
	{
		AForm *form1;
		AForm *form2;
		AForm *form3;
		AForm *form4;

		Bureaucrat Messi("Messi", 1);
		Bureaucrat Raphinha("Raphinha", 20);
		Bureaucrat Lewa("Lewa", 120);
		Intern _1337Student;

		std::cout << "=======================================================" << std::endl;


		form1 = _1337Student.makeForm("presiDEnTiAl pardon", "Messi");
		form2 = _1337Student.makeForm("shrubbery CREation", "Xavi");
		form3 = _1337Student.makeForm("ROBOTomy reQUEST", "Haaland");
		form4 = _1337Student.makeForm("water form4", "Hamid");

		std::cout << "=======================================================" << std::endl;
		if (form1)
		{
			Messi.executeForm(*form1);
			Lewa.signForm(*form1);
			Messi.signForm(*form1);
			Raphinha.signForm(*form1);
			std::cout << *form1 << std::endl;
			Raphinha.executeForm(*form1);
			Messi.executeForm(*form1);
		}
		std::cout << "=======================================================" << std::endl;
		if (form2)
		{
			Messi.signForm(*form2);
			std::cout << *form2 << std::endl;
			Messi.executeForm(*form2);
		}
		std::cout << "=======================================================" << std::endl;
		if (form3)
		{
			Messi.signForm(*form3);
			std::cout << *form3 << std::endl;
			Messi.executeForm(*form3);
		}
		std::cout << "=======================================================" << std::endl;
		delete form1;
		delete form2;
		delete form3;
	}
	catch (std::exception &e)
	{ std::cout << "[ Exception ] : " << e.what() << std::endl; }

	return (0);
}