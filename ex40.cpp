#include <iostream>

int foo(int n)
{
    if(n<=1)
    { return 1;  }
    return  n*foo(n-1);
}

int main()
{
    int number;
    std::cout<<"Please enter any number.\n";
    std::cin>>number;
    std::cout<<foo(number)<<std::endl;
    return 0;
}
