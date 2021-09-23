#include <iostream>

void reverse(std::string str, int size)
{
	std::cout<<str[size];
	if(size< 0)
	{
		return;	
	}
		reverse(str, size-1 );	
}

int main()
{
	std::string str  {"hello world"};
	int size = str.size();
	reverse(str, size-1);
	std::cout<<std::endl;	
	return 0;
}