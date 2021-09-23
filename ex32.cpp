#include <iostream>
#include <string>
void sim (std::string);

int main()
{
    std::string str;
    std::cout << "Enter the line:" << std::endl;
    std::getline (std::cin,str);
    sim (str);
    return 0;
}
void sim (std::string str)
{
    int max = 0;
    int count [256] = {0};
    char resulte;
    for (int i = 0; i < str.size(); ++i)
    {
            if (str[i] == str[i+1])
            {
                count [str[i]]++;
            }
            if (max < count[str[i]])
            {
                max = count[str[i]];
                resulte = str[i];
            }
    }
    std::cout << resulte << std::endl;
}