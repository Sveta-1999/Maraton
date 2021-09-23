#include <iostream>

struct Point 
{
    double x;
    double y;
};
int main() {
    int const size = 2;
   Point Point[size];
   for(int i = 0; i < size; ++i) {
       std::cout<<"enter x: ";
        std::cin >> Point[i].x;
        std::cout<<"enter y: ";
        std::cin>>Point[i].y;
    }
    return 0;
}