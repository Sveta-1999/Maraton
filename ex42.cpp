#include <iostream>

void foo(int num) {
   
    if(num < 0) {
        return ;
    } 
    std::cout<<num<<" ";
    foo(num-1);
}

int main() {
    int num;
    std::cout<<"Please enter any number.\n";
    std::cin>>num;
    foo(num);
    return 0;
}