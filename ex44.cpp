#include <iostream>

int foo(int number) {
    if(number == 0 || number == 1) {
        return number;
    }
    return foo(number - 1) + foo(number - 2);
}

int main() {
    int number;
    int i = 0;
    std::cout << "Please enter any number.\n";
    std::cin >> number;
    std::cout << "fib(" << number<<")";
	while(i < number) {
		std::cout<<" "<<foo(i);
		i++;
	}
    return 0;
}