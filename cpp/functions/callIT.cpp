#include <iostream>
void call_IT() {
  std::string on_off_attempt;
  std::cout << "Hello. IT\n"; 
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
}
void jennCheck() {
  std::cout << "Oh hi Jen!\n";
}
void royCheck() {
  std::cout << "You stole the stress machine? But that's stealing!\n";
}
int main() {

  call_IT();
  jennCheck();
  call_IT();
  royCheck();
  call_IT();
}
