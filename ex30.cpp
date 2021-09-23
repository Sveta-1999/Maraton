#include <iostream>

void foo(int** arr, int* arr1, int n);

int main()
{
    const int size1 = 2;
    const int size2 = 5;
    int* array1 = new int[size2];
    int** array2 = new int*[size1];
    std::cout << "Please enter 4 number.\n";
    for(int i = 0; i < size1; ++i)
    {
        array2[i] = new int[2];
    }
    for(int i = 0; i < size1; ++i)
    {
        for(int j = 0; j < size1; ++j)
        {
            std::cin>>array2[i][j];
        }
    }
    foo(array2, array1, size1);
    return 0;
}

void foo(int** arr, int* arr1, int n)
{
   
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            arr1[i] = arr[i][j];
            std::cout << "arr1=";
            std::cout << arr1[i];
        }
    }
    return;
}
