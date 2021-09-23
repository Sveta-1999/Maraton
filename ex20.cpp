#include <iostream>

void foo(int* arr1, int* arr2, int* arr3, int n);

int main()
{
    const int size1 = 5;
    const int size2 = 5;
    int array1[size1];
    std::cout << "Please enter 5 number.\n" ;
    for ( int i = 0; i < 5; ++i)
    {
        std::cin >> array1[i];
    }
    int array2[size2];
    std::cout<<"Please enter 5 number.\n";
    for( int i = 0; i < 5; ++i)
    {
        std::cin >> array2[i];
    }
    int array3[size1];
    foo(array1, array2, array3, size1);
    return 0;

}

void foo(int* arr1, int* arr2, int* arr3, int n)
{
    for(int i = 0; i < n; ++i)
{
    arr3[i]=arr1[i]*arr2[i];
    std::cout<<arr3[i]<<std::endl;
}
}