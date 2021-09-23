#include <iostream>

int main() {
    int num = 1;
    int n;
    std::cout<<"Enter the number.\n";
    std::cin>>n;
    for(int i =1; i < n; ++i)
    {
        num *= i+1;
    }
    std::cout<<num<<std::endl;
    
    return 0;
}