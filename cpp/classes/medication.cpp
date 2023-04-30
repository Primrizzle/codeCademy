#include <iostream>
#include "class_time.hpp"

int main(int argc, const char * argv[]) {
    
    
    Medication levothyroxine("Levothyroxine", 112, "Take 2 tablets by mouth daily", 180);
    Medication liothyronine("Liothyronine", 5, "Take 2 tablets by mouth daily", 180);
    
    std::cout << "Medication Name: " << levothyroxine.get_name() << std::endl;
    std::cout << "Medication Strength: " << levothyroxine.get_strength() << " mcg" << std::endl << std::endl;
    std::cout << levothyroxine.get_sig() << std::endl << std::endl;
    std::cout << "Quantity: " << levothyroxine.get_quantity() << std::endl << std::endl;
    std::cout << "___________________________________________________________________________________________\n\n";
    
    std::cout << "Medication Name: " << liothyronine.get_name() << std::endl;
    std::cout << "Medication Strength: " << liothyronine.get_strength() << " mcg" << std::endl << std::endl;
    std::cout << liothyronine.get_sig() << std::endl << std::endl;
    std::cout << "Quantity: " << liothyronine.get_quantity() << std::endl << std::endl;
}
