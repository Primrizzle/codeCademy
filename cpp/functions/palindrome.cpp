#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  std::string reverse;
  int last = text.size() - 1;
  bool equal;
  for (int i = last; i  >= 0; i--) {
    reverse += text[i];  
  }
  for (int j = 0; j <= last; j++) {
    if (text[j] == reverse[j]) {
      std::cout << "Palindrome! ";
      return true;  
    } else {
    std::cout << "Not a Palindrome! "; 
    return false;  
    }
  } 
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
