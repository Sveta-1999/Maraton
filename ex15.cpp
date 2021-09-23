#include <iostream>
  
long decimalToBinary(long n);
 
int main() {
    long decimal; 
    std::cout <<"Enter a decimal number\n";
    std::cin >> decimal;
    std::cout << "Binary number = " << decimalToBinary(decimal);
      
    return 0;
}
  
long decimalToBinary(long n) {
    int remainder; 
    long binary = 0, i = 1;
   
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
   