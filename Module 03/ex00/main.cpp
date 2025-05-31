/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:31:09 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/31 22:40:38 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Helper function to create temporary ClapTrap objects
ClapTrap createTemporary() {
    return ClapTrap("TEMP");
}

int main() {
    // Test 1: Copy from named object
    ClapTrap original("Original");
    ClapTrap copy1(original);

    std::cout << "\n--- Temporary Copy Tests ---\n";

    // Test 2: Copy from explicit temporary (corrected)
    ClapTrap copy2(ClapTrap("ExplicitTemp"));  // Direct initialization

    // Test 3: Copy from function-returned temporary
    ClapTrap copy3 = createTemporary();  // Copy initialization

    // Test 4: Single conversion test (works)
    ClapTrap copy4 = std::string("StringConverted");  // Single conversion

    std::cout << "\nAll tests completed!\n";
    return 0;
}