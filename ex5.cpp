#include <iostream>

void foo(int num1, char symb, int num2);

int main() {
    int number1;
    int number2;
    char symbol;
    std::cout << "Please enter the number.\n";
    std::cin >> number1;
    std::cout << "Please enter the symbol.\n";
    std::cin >> symbol;
    std::cout << "Please enter the number.\n";
    std::cin >> number2;
    foo(number1, symbol, number2);
    return 0;
}

void foo(int num1, char symb, int num2) {
    int tmp;
    switch (symb)
    {
    case '+':
    {
        tmp = num1 + num2;
        std::cout<<num1<<"+"<<num2<<"="<<tmp;
        break;
    } 
    case '-':
    {
        tmp = num1-num2;
        std::cout<<num1<<"-"<<num2<<"="<<tmp;
        break;
    }
    case '*':
    {
        tmp = num1*num2;
        std::cout<<num1<<"*"<<num2<<"="<<tmp;
        break;
    }
    case '/':
    {
        tmp = num1/num2;
        std::cout<<num1<<"/"<<num2<<"="<<tmp;
        break;
    }
    default:
        break;
    }
}