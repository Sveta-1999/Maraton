#include <iostream>

struct student 
{
    std::string name;
    std::string surname;
    int age;
};

int main() {
    struct student stud[3];
    for(int i=0; i<2; ++i)
    {   
        std::cout<<"Please enter your name\n";
        std::cin>>stud[i].name;
        std::cout<<"Please enter your surname\n";
        std::cin>>stud[i].surname;
        std::cout<<"Please enter your age\n";
        std::cin>>stud[i].age;
        std::cout<<stud[i].name<<" "<<stud[i].surname<<" "<<stud[i].age<<std::endl;
    }
        stud[2].name = stud[0].name;
        stud[2].surname  = stud[1].surname;
        stud[2].age = (stud[0].age + stud[1].age)/2;
        std::cout<<stud[2].name<<" "<<stud[2].surname<<" "<<stud[2].age<<std::endl;

    return 0;
}