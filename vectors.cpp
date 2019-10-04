#include <iostream>
#include <vector>

//Practice using vectors
//to calculate sum of even nums
//and product of odd nums

int main() {
  
  int total_evenN = 0;
  int product_oddN = 1;
  
  
  std::vector<int> nums {22, 8, 9, 9};
  

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] % 2 == 0) {
      
      total_evenN = total_evenN + nums[i];
      
    }
    
    else {
      
      product_oddN = product_oddN * nums[i];
    }
    
    
  }
  
  std::cout << "Sum of Even: " << total_evenN << "\n";
  std::cout << "Product of Odd: " << product_oddN << "\n";
  
}