// Q1: area of circle using functions
#include<iostream>
using namespace std;
int square(int);
int main()
{
	int r1,r;
	float pi = 3.14,area;
	cout<<"Enter the radius of the circle";
	cin>>r1;
	r=square(r1);
	area= pi*r;
    cout<<"The area of the circle is: "<< area;	
}
int square(int z)
{
	int x;
	x= z*z;
	return x;
}



// Q.2:point addition using structures
#include <iostream>
using namespace std;
struct point
{
	int x,y;
};
int main()
{
	point p1,p2,p3;
	cout<<"Enter the coordinates for p1:";
	cin>>p1.x>>p1.y;
	cout<<"Enter the coordinates for p2:";
	cin>>p2.x>>p2.y;
	p3.x = p1.x+p2.x;
	p3.y = p1.y+p2.y;
	cout<<"Coordinates of p1 + p2 are: "<< p3.x<<" "<<p3.y;
}
