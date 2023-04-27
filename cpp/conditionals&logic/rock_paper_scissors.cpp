#include <iostream> 
#include <stdlib.h>

int main() {

srand(time(NULL)); 
int computerChoice = rand() % 3 + 1; 
int playerChoice = 0; 

std::cout << 
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 
std::cout << "Rock Paper Scissors!\n";
std::cout << 
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

std::cout << "Make a selection from below: \n";
std::cout << "1. ✊ Rock\n"; 
std::cout << "2. ✋ Paper\n";
std::cout << "3. ✌ Scissors\n";
std::cout << "shoot! \n"; 
std::cin >> playerChoice; 
std::cout << "__________..:: R E S U L T S ::..__________\n\n";

switch (playerChoice) {
case 1: // player chooses rock
  std::cout << "You chose Rock! \n"; 
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer chose Rock!\n"; 
      std::cout << "It's a tie!\n"; 
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n"; 
      std::cout << "You lose!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "You win!\n"; 
      break; 
  } break; //case 1 break
case 2: // player chooses paper
  std::cout << "You chose Paper!\n";
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer chose Rock!\n"; 
      std::cout << "You win!\n"; 
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n"; 
      std::cout << "It's a tie!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "You lose!\n"; 
      break;
  } break; // case 2 break 
case 3: // player chooses scissors
  std::cout << "You chose Scissors! \n";
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer chose Rock!\n"; 
      std::cout << "You lose!\n"; 
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n"; 
      std::cout << "You win!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "It's a tie!\n"; 
      break;
  } break; // case 3 break 
default: 
  std::cout << "Invalid response! \n";
  break; 
}
}
