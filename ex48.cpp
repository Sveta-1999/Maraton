#include <iostream>

int foo(int* arr, int size, int index);

int main() {
    int size = 5;
    int arr[size] {1,55,99,8,3};
    int index;
    std::cout<<"Enter any number.\n";
    std::cin >> index;
    foo(arr, size, index);
    return 0;
}

int foo(int* arr, int size, int index) {
    int p[size];
    for(int i = 0; i < size; ++i) {
        if(i == index) {
            p[i] = arr[i+1];
        }
        std::cout << arr[i];
    }
}