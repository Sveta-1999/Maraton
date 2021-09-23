#include <iostream>

int foo1(int** arr, int n);
int foo2(int** arr, int n);

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
    int principal = foo1(p, size);
    int secondary = foo2(p, size);
    std::cout << principal + secondary << std::endl;
    for(int i = 0; i < size; ++i)
    {
        delete[] p[i];
    }
    delete[] p;
    return 0;
}

int foo1(int** arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += arr[i][i];
    }
    return sum;
}

int foo2(int** arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum +=  arr[i][n-i-1];
    }
    return sum;
}
