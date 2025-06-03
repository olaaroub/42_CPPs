// #include "ScavTrap.hpp"
// int main(void)
// {
//     ClapTrap oClapTrap("1337Student");

//     oClapTrap.attack("WorldWide");
//     oClapTrap.beRepaired(200);
//     // oClapTrap.attack("DefaultEnemies");

//     // ClapTrap TwoClapTrap(oClapTrap);

//     // TwoClapTrap.attack("1337Staff");
//     // TwoClapTrap.takeDamage(1);

//     ScavTrap oScavTrap("Yassine");

//     oScavTrap.attack("OwnSpace");
//     oScavTrap.beRepaired(1337);

//     return (0);
// }



#include "ScavTrap.hpp"

int main() {
    std::cout << "\n----- Constructors -----\n";
    ScavTrap def;
    ScavTrap named("Scavvy");
    ScavTrap copy(named);

    std::cout << "\n----- Basic Functionality -----\n";
    named.attack("Target1");
    named.takeDamage(30);
    named.beRepaired(15);
    named.guardGate();

    std::cout << "\n----- Energy Depletion Test -----\n";
    for (int i = 0; i < 50; i++) {
        std::cout << i + 1 << ": ";
        named.attack("Dummy");
    }
    named.beRepaired(10);

    std::cout << "\n----- Death Test -----\n";
    named.takeDamage(200);
    named.attack("Ghost");
    named.guardGate();

    std::cout << "\n----- Copy Behavior Test -----\n";
    copy.attack("CopyTarget");
    copy.guardGate();
    def = named;
    def.attack("AssignedTarget");

    std::cout << "\n----- Destructors -----\n";
    return 0;
}