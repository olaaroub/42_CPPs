/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/16 22:45:11 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int main()
{

    try
    {
        Bureaucrat b3("TEST2", 8);
        Bureaucrat b2("TEST1", 150);
        Form f3("FORM3", 10, 40);

        std::cout << f3 << std::endl;
        std::cout << "===============================" << std::endl;
        b2.signForm(f3); // GradeTooLow
        std::cout << "===============================" << std::endl;

        b3.signForm(f3); // Form is Signed
        std::cout << "===============================" << std::endl;

        std::cout << f3 << std::endl;
        std::cout << "===============================" << std::endl;

        b3.signForm(f3); // Already Signed
        std::cout << "===============================" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "[ Exception ] : " << e.what() << std::endl;
    }
    return (0);
}