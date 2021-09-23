#include <iostream>

int sum(int* arr, int size);
int mul(int* arr, int size);

int main() {
    int const size = 5;
    int arr[size];
    std::cout<<"Please enter 5 number.\n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    int s = sum(arr, size);
    int m = mul(arr, size);
    int result  = (s+m)/2;
    std::cout <<"Sum="<<s <<" Mul="<< m <<"\nThe arithmetic average: "<<result;
    return 0;
}

int sum(int* arr, int size) {
    int s = 0;
    for(int  i = 0; i < size; ++i) {
        
        s += arr[i];
    }
    return s;
}

int mul(int* arr, int size) {
     int m = 1;
    for(int  i = 0; i < size; ++i) {
        
        m *= arr[i];
    }
    return m;
}
