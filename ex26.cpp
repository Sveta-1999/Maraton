#include <iostream>
#include <cmath>

int main ()

{
	//Declare Variables
	double x,x1,x2,a,b,c;

	std::cout << "Input values of a, b, and c." ;
	std::cin >>a >>b >>c;

	for (int i = 1; i <= 10; ++i);
	{
		if ((b * b - 4 * a * c) > 0) {
            std::cout << "x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a)" ;
		    std::cout << "x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a)";
        }
		

		 else if ((b * b - 4 * a * c) = 0) {
            std::cout << "x = ((-b + sqrt(b * b - 4 * a * c)) / (2 * a)"
        }
		

		 else if((b * b - 4 * a * c) < 0) {
			std::cout << "x1 = ((-b + sqrt(b * b - 4 * a * c) * sqrt (-1)) / (2 * a) ;
			std::cout << "x2 = ((-b + sqrt(b * b - 4 * a * c) * sqrt (-1)) / (2 * a);
	}
    }
	return (0);

 }