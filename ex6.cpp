#include <iostream>

void foo(std::string str);

int main() {
    std::string str;
    std::cout << "Please enter your name.\n";
    std::getline(std::cin, str);
    foo(str);
    return 0;
}

void foo(std::string str) {
    for(int i = str.size()-1; i >= 0; --i) {
        std::cout<<str[i];
    }
    return;
}
