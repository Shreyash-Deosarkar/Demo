/*Write a Program to overload Max function as below.
int Max(int,int);
int Max(int, int ,int);
float Max(float,int);*/


#include<iostream>
using namespace std;
int max(int,int);
int max(int,int,int);
float max(float,int);
int main()
{
	int n1,n2;
	cout<<"Enter two intgers numbers::";
	cin>>n1>>n2;
   cout<<"Max between "<<n1<<" and "<<n2<<" is "<<max(n1,n2)<<endl;
   
   int n3;
   cout<<"Enter 3rd integer::"<<endl;
   cin>>n3;
    cout<<"Max between "<<n1<<","<<n2<<" and "<<n3<<" is "<<max(n1,n2,n3)<<endl;
    
   float f1;
   int n4;
   cout<<"Enter a float and integer::"<<endl;
   cin>>f1>>n4;
    cout<<"Max between "<<f1<<" and "<<n4<<" is "<<max(f1,n4);
   
}
int max(int n1,int n2)
{
	return(n1>n2?n1:n2);
}
int max(int n1,int n2,int n3)
{
	return(n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));//1,2,3
}
float max(float f1,int num1)
{
	return(f1>num1?f1:num1);
}
