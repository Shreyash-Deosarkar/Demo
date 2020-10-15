/*
Write a program to overload sum function as
int sum(int ,int);
float sum(float, int);
double sum(double, float, int);*/

#include<iostream>
using namespace std;
int sum(int ,int);
float sum(float,int);
double sum(double,float,int);
int main()
{
	int n1,n2;
	cout<<"Enter two integer::";
	cin>>n1>>n2;
	cout<<sum(n1,n2)<<endl;
	
	float a;
	int b;
	cout<<"Enter float and integer::";
	cin>>a>>b;
	cout<<sum(a,b)<<endl;
	
	double x;
	float y;
	int z;
	cout<<"Enter double,float and integer::";
	cin>>x>>y>>z;
	cout<<sum(x,y,z)<<endl;
	
}
int sum(int a,int b)
{
	return(a+b);
}
float sum(float x,int y)
{
	return (x+y);
}
double sum(double a,float b,int c)
{
	return(a+b+c);
}
