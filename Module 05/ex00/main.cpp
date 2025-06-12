/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:07:46 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/12 21:48:45 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string word = "four";
    try
    {
        int* arr= new int[999999999999999];
    }
    catch(std::bad_alloc &e)
    {
        std::cout << "Exception: " << e.what() << std::endl ;
    }
    try
    {
        std::cout << word.at(3) << std::endl;

    }
    catch (std::out_of_range &e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

}