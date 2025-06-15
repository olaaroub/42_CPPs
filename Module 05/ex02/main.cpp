/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/15 23:17:50 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{

    try
    {
        Bureaucrat b3("TEST2", 8);
        AForm f3("FORM3", 10, 40);

        std::cout << f3 << std::endl;

        f3.beSigned(b3);

        std::cout << f3 << std::endl;

        b3.signForm(f3);
    }
    catch (AForm::GradeTooHighException &e)
    {
        std::cout << "[ Exception ] : " << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << "[ Exception ] : " << e.what() << std::endl;
    }

    return (0);
}