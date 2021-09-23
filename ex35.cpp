#include <iostream>

struct student 
{
    std::string name;
    std::string surname;
    int age;
};

int main() {
    struct student stud[2];
    for(int i=0; i<2; ++i)
    {   
        std::cout<<"Please enter your name\n";
        std::cin>>stud[i].name;
        std::cout<<"Please enter your surname\n";
        std::cin>>stud[i].surname;
        std::cout<<"Please enter your age\n";
        std::cin>>stud[i].age;
    }

    if(stud[0].age>stud[1].age)
    {
        std::cout<<stud[0].name;
    }
    else
    {
        std::cout<<stud[1].name;
    }
    return 0;

}

