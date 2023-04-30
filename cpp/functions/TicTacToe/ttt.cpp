#include <iostream>
#include "ttt_functions.hpp"

//Main
int main(int argc, const char * argv[]) {
    
    greet();
    
    while(is_filled() != true && scratch() != true) {
        take_turn();
        if (is_filled() == false && scratch() == false) {
            change_turns();
        } else {
            break;
        }
    }
    end_game();
}

