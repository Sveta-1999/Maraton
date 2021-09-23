#include <iostream>

void Hex(int n)
{
    char Num[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            Num[i] = temp + 48;
            i++;
        }
        else {
            Num[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
 
    for (int j = i - 1; j >= 0; j--)
        std::cout << Num[j];
}
 
int main()
{
    int n;
    std::cout<<"Please enter any number.\n";
    std::cin>>n;
    Hex(n);
    return 0;
}