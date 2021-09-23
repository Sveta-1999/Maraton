#include<iostream>

struct point{           
	int x;
	int y;
};
struct line{
	point start;
	point end;
	double a;
};
int main(){
	line AB,CD;
	std::cout<<"AB line:"<<std::endl;
	std::cin>>AB.start.x>>AB.end.x>>AB.start.y>>AB.end.y;
	std::cout<<"CD line:"<<std::endl;
	std::cin>>CD.start.x>>CD.end.x>>CD.start.y>>CD.end.y;
	AB.a=(double)(AB.end.y-AB.start.y)/(double)(AB.end.x-AB.start.x); 
	CD.a=(double)(CD.end.y-CD.start.y)/(double)(CD.end.x-CD.start.x);
	std::cout<<"AB___a:"<<AB.a<<std::endl;
	std::cout<<"CD___a:"<<CD.a<<std::endl;
	if(AB.a==CD.a){
		std::cout<<"Wrong";
	}
	else
	{
		std::cout<<"Right";
	}
}