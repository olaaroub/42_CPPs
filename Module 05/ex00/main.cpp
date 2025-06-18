/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/18 17:43:25 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// Bureaucrat b1("TEST0", 160);
		// Bureaucrat b2("TEST1", -10);
		Bureaucrat b3("TEST2", 150);
		Bureaucrat b4("TEST3", 1);

		std::cout << b3 << std::endl
				  << b4 << std::endl;
		b4.incrementGrade();
		b3.decrementGrade();
		std::cout << b3 << std::endl
				  << b4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "[ Exception ] : " << e.what() << std::endl;
	}
	return (0);
}