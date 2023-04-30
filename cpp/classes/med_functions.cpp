#include <iostream>
#include <string>

#include "class_time.hpp"

Medication::Medication(std::string newName, int streng, std::string sig, int quant) {
    name = newName;
    strength = streng;
    directions = sig;
    quantity = quant;
}
std::string Medication::get_name() {
    return name;
}
int Medication::get_strength() {
    return strength;
}
std::string Medication::get_sig() {
    return directions;
}
int Medication::get_quantity() {
    return quantity; 
}
