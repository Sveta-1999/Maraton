#include <iostream>

int** foo(int** p, int size);

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
        for(int j = 0; j < size; ++j)
        {
            std::cout << p[i][j]<<std::endl;
        }
    }
    for(int i = 0; i < size; ++i)
    {
        delete[] p[i];
    }
    delete[] p;
    return 0;
}

int** foo(int** p, int size) {
    int arr[size];
    for(int i = 0; i < size; ++i)
    {
        arr[i] = p[i][i];
        p[i][i] = p[i][size-i-1];
        p[i][size-i-1] = arr[i];
    }
    return p;
}