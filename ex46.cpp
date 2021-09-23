#include <iostream>

int rev(int array[], int len)
{
	if(len >= 0)
 	{
		array[len];
		rev(array, len-1);
		std::cout << array[len] <<std::endl;
	} 
	else
	{
		return 0;
	}
}

int main() {
	int arr[10] = {4,8,6,99,77,55,44,33,11,22};
        rev(arr, 9);
	return 0;
}