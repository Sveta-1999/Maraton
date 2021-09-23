#include <iostream>

int foo(int number, int k) {
    int arr[5];
     for(int i = number; number > 0; number/=10) {
     int tmp = number % 10; 
    }
    
       return arr[5];
}

int main() {
    int number;
    std::cout<<"Enter the number.\n";
    std::cin>>number;
    int k;
    std::cout<<"Enter the key.\n";
    std::cin>>k;
    std::cout<<foo(number,k);
   
    return 0;
}