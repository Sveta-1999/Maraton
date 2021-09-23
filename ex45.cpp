#include <iostream>

int main()
{
    int number;
    std::cout << "Please enter any number.\n";
    std::cin >> number;
    int num1 = 0, num2  = 1;
    std::cout<<num1<<" "<<num2<<" ";
   
        for(int i = 0; i < number-2; ++i)
        {
            std::cout<<num1 + num2<<" ";
            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
        }
    
    return 0;
}