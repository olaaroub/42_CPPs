#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &oScavTrap);
        ScavTrap &operator=(ScavTrap &oScavTrap);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate() const;
};

#endif