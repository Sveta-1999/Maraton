#include <iostream>

int max(int number);
int min(int number);

int main() {
    int number;
    std::cout<<"Please enter any positiv number.\n";
    std::cin>>number;
    std::cout<<"max = "<<max(number);
    std::cout<<"min = "<<min(number);
    return 0;
}

int max(int number) {
    int max = number%10;
    while (number)
    {
        int tmp = number%10;
        if(max < tmp) {
            max = tmp;
        }
        number/10;
    }
    return max;
}

int min(int number) {
    int min = number%10;
    while (number)
    {
        int tmp = number%10;
        if(min > tmp) {
            min = tmp;
        }
        number/10;
    }
    return min;
}