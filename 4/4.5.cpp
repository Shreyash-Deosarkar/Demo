/*5.	Write a Program to Overload Area () function to calculate area of Circle, Rectangle, Square.
(No need to take any class) can perform overloading within main() function.*/

#include<iostream>
#include<string.h>
using namespace std;
float Area(int);
int Area(int,int);
float Area(float);
int main()
{
	int r;
	cout<<"Enter radius of circle:: "<<endl;
	cin>>r;
	cout<<"Area of Circle is :: "<<Area(r)<<endl;
	
	int l,b;
	cout<<"Enter length and breadth:: "<<endl;
	cin>>l>>b;
	cout<<"Area of rectangle is:: "<<Area(l,b)<<endl;
	
	float s;
	cout<<"Enter the side of square:: "<<endl;
	cin>>s;
	cout<<"Area of square:: "<<Area(s)<<endl;
}
float Area(int r)
{
	return (3.14*r*r);
}
int Area(int l,int b)
{
	return (l*b);
}
float Area(float s)
{
	return (s*s);
}
