#include <iostream>

double foo(double number);

int main()
{
double x;
std::cin>>x;
std::cout << "Please enter any number.\n";
std::cout<<foo(x)<<"km";
return 0;
}

double foo(double number) {
    return number/1000;
}