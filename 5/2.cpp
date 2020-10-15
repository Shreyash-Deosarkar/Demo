/*     Write a C++ program to read an integer n and prints the factorial of n*/

#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter a number:: "<<endl;
	cin>>n;
	int num=n;
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	cout<<n<<"!= "<<fact;
}
