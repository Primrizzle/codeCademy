#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
    
    int players_choice, pc_choice, result;
    srand(time(NULL));
    pc_choice = rand() % 5 + 1;
    std::string pc_call;
    
    switch (pc_choice) {
        case 1: // Rock
            pc_call = "Rock";
            break;
        case 2: // Paper
            pc_call = "Paper";
            break;
        case 3: // Scissors
            pc_call = "Scissors";
            break;
        case 4: // Lizard
            pc_call = "Lizard";
            break;
        case 5: // Spock
            pc_call = "Spock";
            break;
    }
    
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "  Rock, Paper, Scissors, Lizard, Spock!!\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    
    std::cout << "Let's play Rock, Paper, Scissors, Lizard, Spock!\n";
    std::cout << "1. Rock!\n";
    std::cout << "2. Paper!\n";
    std::cout << "3. Scissors!\n";
    std::cout << "4. Lizard!\n";
    std::cout << "5. Spock!\n";
    std::cin >> players_choice;
    
    std::cout << "The computer chose: " << pc_call << "\n";
    
    if (players_choice == pc_choice)
        result = 0;
    else if ((players_choice == 1 && (pc_choice == 3 || pc_choice == 4)) || (players_choice == 2 && (pc_choice == 1 || pc_choice == 5)) ||
               (players_choice == 3 && (pc_choice == 2 || pc_choice == 4)) || (players_choice == 4 && (pc_choice == 2 || pc_choice == 5)) ||
               (players_choice == 5 && (pc_choice == 1 || pc_choice == 3)))
        result = 1;
    else
        result = -1;
    
        
    if (result == 0)
        std::cout << "It's a tie!\n";
    else if (result == 1)
        std::cout << "You won!\n";
    else if (result == -1)
        std::cout << "You lost!\n";

}
