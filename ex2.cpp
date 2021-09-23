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
    for(int i = 0; i < number; number /= 10) {
        rev = rev*10+(number%10);
    }
    std::cout<<rev<<" ";
}