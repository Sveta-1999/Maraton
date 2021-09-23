#include <iostream>

struct Line 
{
    double x;
    double y;
};
int main() {
   Line obj;
   std::cout<<"enter x: ";
   std::cin >> obj.x;
   std::cout<<"enter y: ";
   std::cin>>obj.y;
    return 0;
}