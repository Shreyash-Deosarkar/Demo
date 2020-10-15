/*
9.	Write a program to facilitate user to handle any chance of divide by zero exception.
*/

#include<iostream>
using namespace std;

int main()
{
	int nr,dr;
	cout<<"Enter a numerator :: "<<endl;
	cin>>nr;
	cout<<"Enter a denominator:: "<<endl;
	cin>>dr;
	
	try
	{
		
		if(dr>0)
		cout<<nr/dr;
		else
		throw 1;
	}
	catch (int n)
	{
		cout<<"Divided by zero";
	}
}



