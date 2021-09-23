#include <iostream>

void foo(int* arr, int size);

int main() {
    const int size=5;
    int arr[size];
    std::cout<<"Please enter 5 number.\n";
    for(int i=0; i<=size; ++i)
    {
        std::cin>>arr[i];
    } 
    foo(arr, size);
    return 0;
}

void foo(int* arr, int size) {
    for(int i=size; i>=0; --i)
    {
        std::cout<<arr[i];
    }
}