#include <iostream>

void foo(int **arr, int n);

int main()
{
    const int size1=3;
    const int size2=3;
    std::cout<<"Please enter 9 number.\n";
    int **p = new int*[3];
    for(int i = 0; i < size1; ++i)
    {
        p[i] = new int[3];
    }
    for(int i = 0; i < size1; ++i)
    {
        for(int j = 0; j < size1; ++j) 
        {
            std::cin>>p[i][j];
        }
    }
    foo(p, size1);
    for(int i = 0; i < size1; ++i)
    {
        delete[] p[i];
    }
    delete[]p;
}

void foo(int **arr, int n)
{
    for(int i = 0; i < n; ++i)
    {
        std::cout<<arr[i][i];
    }
}