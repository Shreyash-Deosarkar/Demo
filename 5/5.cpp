/*
5.      Write a C++ program to convert a given number into hours and minutes.
 Separate the number of hours and minutes with a colon.
For example if a given number is 69 the output should be 1:09*/

#include<iostream>
using namespace std;
int main()
{
	int min,h,m;
	cout<<"Enter minutes:: "<<endl;
	cin>>min;
	h= min/60;
	m= min%60;
	cout<<"Time is: "<<h<<":"<<"0"<<m;
}
