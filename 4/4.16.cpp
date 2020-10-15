/*16...Write a Template function to add two integers, two doubles, and two float values.*/

#include<iostream>
using namespace std;

template <class t>
void add(t &n1,t &n2)
{
	cout<<"Sum:: "<<(n1+n2)<<endl;
}

int main()
{
	int num1,num2;
	cout<<"Enter two numbers:: "<<endl;
	cin>>num1>>num2;
	add(num1,num2);
	
	float a,b;
	cout<<"Enter two float values:: "<<endl;
	cin>>a>>b;
	add(a,b);
	
	double x,y;
	cout<<"Enter two double values:: "<<endl;
	cin>>x>>y;
	add(x,y);
}
