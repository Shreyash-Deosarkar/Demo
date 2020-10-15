/*17,..Write a Template function to find maximum of two Integers numbers  and two float numbers.*/


#include<iostream>
using namespace std;

template <class t>
void max(t &n1,t &n2)
{
	cout<<"Max:: "<<(n1>n2?n1:n2)<<endl;
	
}

int main()
{
	int num1,num2;
	cout<<"Enter two integer numbers:: "<<endl;
	cin>>num1>>num2;
	max(num1,num2);
	
	float a,b;
	cout<<"Enter two float numbers:: "<<endl;
	cin>>a>>b;
	max(a,b);
}
