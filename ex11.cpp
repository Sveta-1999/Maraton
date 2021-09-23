#include <iostream>

int main() {
    for(int i = 1; i < 7; ++i) {
        for(int j = 0; j < i; ++j) {
            std::cout << '@';
        }
        std::cout<<std::endl;
    }
    for(int i = 0; i < 7; ++i) {
        for(int j = 0; j < 4; ++j) {
            std::cout << '@';
        }
    }

    return 0;
}