/*Write a C++ program to write function for doing swapping of two integers using 
(call by address & Call by reference)*/

#include<iostream>
using namespace std;
void swap(int*,int*);
void swap(int &,int &);
int main()
{
	int n1,n2;
	cout<<"Enter two nnubers::";
	cin>>n1>>n2;
	cout<<"Before swapping::"<<n1<<" "<<n2<<endl;
	swap(n1,n2);   //call by value for call  by ref
	cout<<"Before swapping::"<<n1<<" "<<n2<<endl;
	swap(&n1,&n2);//call by add
}
void swap(int &num1,int &num2)//call by refrence
{
	int n3;
	n3=num1;
	num1=num2;
	num2=n3;
	cout<<"After swapping::"<<num1<<" "<<num2<<endl;
}
void swap(int *x,int *y)
{
	int *z;
	z=x;
	x=y;
	y=z;
	
	cout<<" After swapping::"<<*x<<" "<<*y;
}
