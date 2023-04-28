#include <iostream>
#include <vector>

int main() {
  std::vector<int> vect1 = {2, 4, 3, 6, 1, 9}; 
  int even = 0; 
  int odd = 1; //cleared buffer

  for (int i = 0; i < vect1.size(); i++) {
    if (vect1[i] % 2 == 0) {
      even += vect1[i];
    } else {
      odd = odd * vect1[i]; 
    }
  }

  std::cout << "Sum of even numbers is " << even << "\n"; 
  std::cout << "Product of odd numbers is " << odd << "\n"; 
}


/*
Output:
Sum of even numbers is 12
Product of odd numbers is 27
  /*
