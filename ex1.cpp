#include <iostream>

void foo(int num);

int main() {
    int num;
    std::cout<<"Please enter any positive number"<<std::endl;
    std::cin>>num;
    foo(num);
    return 0;
}

void foo(int num) {
    int rev=0;
    for(int i=0;i<num; num /= 10) 
    {
        rev=rev*10+(num%10);
    }
    //std::cout<<rev<<std::endl;
    for(int i=0; i<rev; rev /= 10) 
    {
    std::cout<<"'"<<rev%10<<"'";
    }
}
