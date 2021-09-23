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
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
               str[i+1];
           }
           else {
               std::cout<<str[i];
           }
           

    }
}