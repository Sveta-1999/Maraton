#include <iostream>

int foo(int* arr, int size);

int main() {
    int const size = 5;
    int arr[size];
    std::cout << "Please enter 5 number.\n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    std::cout<<"Index="<<foo(arr, size);
    return 0;
}

int foo(int* arr, int size) {
    int index=0;
    int max=arr[0];
    for(int i=1; i<size; ++i)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        } 
    }
    return index;
}

