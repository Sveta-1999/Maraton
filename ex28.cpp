#include <iostream>

void foo(int* arr, int n);

int main()
{
const int size = 10;
int* arr = new int[size];
std::cout<<"please enter 10 number.\n";
for(int i = 0; i < size; ++i)
{
std::cin>>arr[i];
}
foo(arr, size);
delete[] arr;
return 0;
}

void foo(int* arr, int n)
{
for(int i = 0; i < n; ++i)
{
if(arr[i]%2==1)
{
std::cout<<arr[i];
}
}
return;
}
