/*7.	Write a C++ program to overload Max () function which will do below tasks.
A.	Find max of two numbes.
B.	Find max from array  */

#include<iostream>
#include<string.h>
using namespace std;
int max(int,int);
int max(int []);

int main()
{
	int n1,n2;
	cout<<"Enter two numbers:: "<<endl;
	cin>>n1>>n2;
	cout<<"Max between "<<n1<<" and "<<n2<<" is:: "<<max(n1,n2)<<endl;
	
	int n[5];
	cout<<"Max no from the given array is :: "<<max(n);
}
int max(int a,int b)
{
	return (a>b?a:b);
}
int max(int a[])
{
	cout<<"Enter 5 elements of array:: "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(int i=1;i<5;i++)
	{
		if(a[i]>max)
		  max=a[i];
	}
	return max;
}
