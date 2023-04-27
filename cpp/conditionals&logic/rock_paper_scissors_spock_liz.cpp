#include <iostream> 
#include <stdlib.h>

int main() {

srand(time(NULL)); 
int computerChoice = rand() % 5 + 1; 
int playerChoice = 0; 
char choice; 

do {
std::cout << 
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 
std::cout << "Rock Paper Scissors!\n";
std::cout << 
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

std::cout << "Make a selection from below: \n";
std::cout << "1. ✊ Rock\n"; 
std::cout << "2. ✋ Paper\n";
std::cout << "3. ✌ Scissors\n";
std::cout << "4. 🦎 Lizard\n";
std::cout << "5. 🖖 Spock\n";
std::cout << "shoot! \n"; 
std::cin >> playerChoice; 
std::cout << "__________..:: R E S U L T S ::..__________\n\n";

switch (playerChoice) {
case 1: // player chooses rock
  std::cout << "You chose Rock! \n"; 
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer also chose Rock!\n"; 
      std::cout << "It's a tie!\n"; 
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n";
      std::cout << "Paper covers Rock.";
      std::cout << "You lose!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "Rock crushes scissors.\n";
      std::cout << "You win!\n"; 
      break; 
    case 4: // PC chooses lizard
      std::cout << "Computer chose Lizard!\n";
      std::cout << "Rock crushes lizard.\n"; 
      std::cout << "You win!"; 
      break; 
    case 5: // PC chooses Spock
      std::cout << "Computer chose Spock! \n";
      std::cout << "Spock vaporizes rock. \n";
      std::cout << "You lose!"; 
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
    case 4: // PC chooses lizard
      std::cout << "Computer chose Lizard!\n";
      std::cout << "Lizard eats paper.\n"; 
      std::cout << "You lose!"; 
      break;
    case 5: // PC chooses Spock
      std::cout << "Computer chose Spock! \n";
      std::cout << "Paper disproves Spock. \n";
      std::cout << "You win!"; 
      break; 
  } break; // case 2 break 
case 3: // player chooses scissors
  std::cout << "You chose Scissors! \n";
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer chose Rock!\n";
      std::cout << "Rock crushes scissors.\n";
      std::cout << "You lose!\n"; 
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n";
      std::cout << "Scissors cut paper.\n";
      std::cout << "You win!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "It's a tie!\n"; 
      break;
    case 4: // PC chooses lizard
      std::cout << "Computer chose Lizard!\n";
      std::cout << "Scissors decapitates lizard.\n"; 
      std::cout << "You win!"; 
      break;
    case 5: // PC chooses Spock
      std::cout << "Computer chose Spock! \n";
      std::cout << "Spock smashes scissors. \n";
      std::cout << "You lose!"; 
      break; 
  } break; // case 3 break 
case 4: // Player chooses lizard
  std::cout << "You chose Lizard! \n";
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer chose Rock!\n"; 
      std::cout << "Rock crushes lizard\n"; 
      std::cout << "You lose!";
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n"; 
      std::cout << "Lizard eats paper.\n"; 
      std::cout << "You win!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "Scissors decapitates lizard.\n"; 
      std::cout << "You win!\n"; 
      break;
    case 4: // PC chooses lizard
      std::cout << "Computer chose Lizard!\n";
      std::cout << "It's a tie!"; 
      break;
    case 5: // PC chooses Spock
      std::cout << "Computer chose Spock! \n";
      std::cout << "Lizard poisons Spock.\n";
      std::cout << "You win!"; 
      break; 
  } break; // case 4
case 5: // Player chooses spock
  std::cout << "You chose Spock! \n";
  switch (computerChoice) {
    case 1: // PC chooses rock
      std::cout << "Computer chose Rock!\n"; 
      std::cout << "Spock vaporizes Rock.\n"; 
      std::cout << "You win!";
      break; 
    case 2: // PC chooses paper
      std::cout << "Computer chose Paper!\n"; 
      std::cout << "Paper disproves Spock\n"; 
      std::cout << "You lose!\n"; 
      break; 
    case 3: // PC chooses scissors
      std::cout << "Computer chose Scissors!\n"; 
      std::cout << "Spock smashes Scissors\n"; 
      std::cout << "You win!\n"; 
      break;
    case 4: // PC chooses lizard
      std::cout << "Computer chose Lizard!\n";
      std::cout << "Lizard poisons Spock\n";
      std::cout << "You win!\n"; 
      break;
    case 5: // PC chooses Spock
      std::cout << "Computer chose Spock! \n";
      std::cout << "It's a tie!\n";
      break; 
  } break; //case 5
default: 
  std::cout << "Invalid response! \n";
  break; 
} //switch
//ask player to continue or quit. 
std::cout << "Press any key to continue or 'q' to quit.\n"; 
std::cin >> choice;

} while (choice != 'q' || choice != 'Q'); 
} //main
