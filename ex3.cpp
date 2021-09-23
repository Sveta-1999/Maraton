#include <iostream>

void foo(int number);

int main() {
    int number;
    std::cout<<"Please enter any positiv number.\n";
    std::cin>>number;
    foo(number);
    return 0;
}

void foo(int number) {
    int rev = 0;
    int tmp=0;
    for(int i = 0; i < number; number /= 10) {
        rev = number%10;
        tmp += rev;
    }
    std::cout<<tmp;
}