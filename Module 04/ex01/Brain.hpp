/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:28:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 23:44:26 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(std::string name);
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        ~Brain();
};

#endif