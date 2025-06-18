/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 00:58:12 by olaaroub         ###   ########.fr       */
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
        Intern _1337student;

        Bureaucrat bureaucrat("Oussama", 137);
        // AForm *form = new PresidentialPardonForm("presidential form");
        // AForm *form2 = new RobotomyRequestForm("Robot request");
        // AForm *form3 = new ShrubberyCreationForm("home");
        AForm* form1 = _1337student.makeForm("SHRuBBerY creation", "dorm1");

        std::cout << "===============================" << std::endl;

        // std::cout << *form << std::endl;

        // std::cout << "===============================" << std::endl;
        // bureaucrat.signForm(*form);
        // bureaucrat.executeForm(*form);
        // bureaucrat.executeForm(*form);
        // std::cout << "===============================" << std::endl;
        // std::cout << *form << std::endl;

        // std::cout << *form2 << std::endl;

        // std::cout << "===============================" << std::endl;
        // bureaucrat.signForm(*form2);
        // bureaucrat.signForm(*form2);
        // bureaucrat.executeForm(*form2);
        // std::cout << "===============================" << std::endl;
        // std::cout << *form2 << std::endl;

        // std::cout << *form3 << std::endl;

        // std::cout << "===============================" << std::endl;
        // bureaucrat.signForm(*form3);
        // bureaucrat.executeForm(*form3);
        // std::cout << "===============================" << std::endl;
        // std::cout << *form3 << std::endl;

        std::cout << *form1 << std::endl;

        std::cout << "===============================" << std::endl;

        bureaucrat.signForm(*form1);
        bureaucrat.executeForm(*form1);

        std::cout << "===============================" << std::endl;

        std::cout << *form1 << std::endl;

        delete form1;
        // delete form2;
        // delete form3;
    }
    catch (std::exception &e)
    {
        std::cout << "[ Exception ] : " << e.what() << std::endl;
    }

    return (0);
}