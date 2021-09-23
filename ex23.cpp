#include <iostream>

void foo(int** arr, int n);

int main()
{
    const int size = 3;
    std::cout << "Please enter 9 number.\n";
    int **p = new int*[3];
    for(int i = 0; i < size; ++i)
    {
        p[i] = new int[3]; 
    }
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cin >> p[i][j];
        }
    }
    foo(p, size);
    for(int i = 0; i < size; ++i)
    {
        delete[] p[i];
    }
    delete[] p;
    return 0;
}

void foo(int** arr, int n)
{
    for(int i = 0; i < n; ++i)
    {
        std::cout<<arr[i][n-i-1];
    }
}