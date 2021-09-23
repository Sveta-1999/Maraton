#include <iostream>

void foo(std::string str);

int main() {
    std::string str;
    std::cout<<"Please enter text \n";
    std::getline(std::cin,str);
    foo(str);
    return 0;
}

void foo(std::string str) {
     for(int i=0; i<=str.size(); ++i)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
            std::cout<<str[i];
        }
        else
        {
            std::cout<<str[i];
        }
    }
    return;
}