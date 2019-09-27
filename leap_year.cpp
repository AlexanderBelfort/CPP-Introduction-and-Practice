//Leap year checker
#include <iostream>
#include <string>

int main() {
  //Take a year as input
  
  int year = 0;
  std::cout << "Enter a year: ";
  std::cin >> year;
  

  //Check if year is 4 digits
  
  if (year < 1000 || year > 9999){
    std::cout << "Invalid input. Please try again.\n";
  }

  //Check if year is leap
  //using the mathematical rules
  //that every 4 year a leap year must occur
  //and that every 100 years a special rule applies
  
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year;
    std::cout << " is leap!\n";
  }
  
  //all other cases
  //must lead to a year
  //that is not leap
  
  else {
    std::cout << year;
    std::cout << " is not leap!\n";
  }
  
}
