#include <iostream>

int main() {
    int number;
    std::cout << "Please enter any number.\n";
    std::cin >> number;
    for(int i = 0; i<number; ++i) {
        std::cout<<number-i<<" ";
    }
    return 0;
}