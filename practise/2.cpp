/*Write inline function in C++ to find maximum of two numbers.*/
/*
#include<iostream>
using namespace std;
inline void max(int,int);
int main(){
	int n1,n2;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;
    max(n1,n2);
}
void max(int n1,int n2){
	cout<<"Max= "<<(n1>n2?n1:n2);
}

*/
//*******************************************

/*Write a inline function to find square of a number.*/
/*
#include<iostream>
using namespace std;
inline void square(int&);
int main(){
	int n;
	cout<<"Enter a number:: "<<endl;
	cin>>n;
	square(n);
}
void square(int &n1){
	cout<<n1<<"^2= "<<(n1*n1);
}

*/

//****************************************************
/*Write a Menu driven program to write 4 inline functions to show Arithmetic 
operation(ADD,SUB,MUL,DIV).write main() function to call all of them.*/
/*
#include<iostream>
using namespace std;
inline void add(int ,int);
inline void sub(int ,int);
inline void mul(int ,int);
inline void div(int ,int);
int main(){
int n1,n2;
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	char ch;
	do{
	
	cout<<"******menu*********"<<"\n1.Addition"<<"\n2.Substraction"<<"\n3.Multiplication"<<"\n4.Division"<<"\n0.Exit"<<endl;
   cout<<"Enter your choise:: "<<endl;
   cin>>ch;
    switch(ch)
    {
	
    	case 1:
    		add(n1,n2);
    		break;
    	case 2:
    		sub(n1,n2);
    		break;
    	case 3:
    		mul(n1,n2);
    		break;
    	case 4:
    		div(n1,n2);
    		break;
   }
}while(ch!=0);
}
void add(int a,int b)
{
	cout<<a<<"+"<<b<<"= "<<(a+b);
}
void sub(int a,int b)
{
     cout<<a<<"-"<<b<<"= "<<(a-b);
}
void mul(int a,int b)
{
	cout<<a<<"*"<<b<<"= "<<(a*b);
}
void div(int a,int b)
{
	cout<<a<<"/"<<b<<"= "<<(a/b);
}

*/
/******************************************************************
/*
Write a program to overload sum function as
int sum(int ,int);
float sum(float, int);
double sum(double, float, int);*/
/*
#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,int);
double sum(double,float,int);
int main()
{
	int n1,n2;
	cout<<"Enter two integer: "<<endl;
	cin>>n1>>n2;
	sum(n1,n2);
	
	float f;
	int n3;
	cout<<"Enter float and integer: "<<endl;
	cin>>f>>n3;
	sum(f,n3);
	
	double d;
	float f1;
	int n4;
	cout<<"Enter double, float and integer: "<<endl;
	cin>>d>>f1>>n4;
	sum(d,f1,n4);
}
int sum(int a, int b)
{
	cout<<"Sum is "<<(a+b)<<endl;
}
float sum(float f2,int n5)
{
	cout<<"Sum is "<<(f2+n5)<<endl;
}
double sum(double d1,float f3,int n6)
{
	cout<<"Sum is "<<(d1+f3+n6)<<endl;
}
*/

//****************************************************************


/*Write a Program to overload Max function as below.
int Max(int,int);
int Max(int, int ,int);
float Max(float,int);*/
/*
#include<iostream>
using namespace std;
int max(int&,int&);
int max(int&,int&,int&);
float max(float&,int&);
int main()
{
	int n1,n2;
	cout<<"Enter two two numbers:: "<<endl;
	cin>>n1>>n2;
	max(n1,n2);
	
	int a,b,c;
	cout<<"Enter 3 numbers:: "<<endl;
	cin>>a>>b>>c;
	max(a,b,c);
	
	float f;
	int n3;
	cout<<"Enter a float and number:: "<<endl;
	cin>>f>>n3;
	max(f,n3);
}
int max(int&n1,int &n2)
{
	cout<<"Max is "<<(n1>n2?n1:n2)<<endl;
}
int max(int &n1,int &n2,int &n3)
{
	cout<<"Max is "<<(n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3))<<endl;
}
float max(float&f1,int &n4)
{
	cout<<"Max is "<<(f1>n4?f1:n4)<<endl;
}
*/

//***********************************************
/*Write a program to overload accept function as below
void accept(char ch, int len) - which accepts string character by character until then length.
void accept(char [])-Which accepts the string directly.
Write main() to call these two functions. also print the output.*/
/*
#include<iostream>
#include<string.h>
using namespace std;
void accept(char[],int);
void accept(char[]);
int main()
{ 
     int len;
    char ch[len];
    char word[20];
    cout<<"Enter a size of array: "<<endl;
    cin>>len;
    accept(ch,len);
    cout<<"Enter a word:: "<<endl;
    cin>>word;
    accept(word);
}
void accept(char a[],int size)
{
	cout<<"Enter a word letter by letter:: "<<endl;
	for(int i=0;i<=size;i++)
	{
		cin>>a[i];
	}
	cout<<a<<endl;
}
void accept(char str[])
{
	cout<<str<<endl;
	cout<<strlen(str);
}

*/

//****************************************
/*Write a program to use default argument in an function as follows.
Double Area(double=3.0); //Default value for radius is given as 3.0.
.Write main function to call this function do not provide any parameter.
 It will use default value for calculations print the area of circle..*/
 /*
#include<iostream>
using namespace std;
double area(double=3);
int main()
{
	double r;
	area();
}
double area(double r)
{
	cout<<"Area of circle is "<<(3.14*r*r);
}
*/
/*Write a date class to print the date on console*/

#include<iostream>
using namespace std;
class Date
{
	int d,m ,y;
	public:
		Date();
		Date(int,int,int);
		void Display();
};
Date::Date()
{
	d=0;
	m=0;
	y=0;
}
Date::Date(int d,int m,int y)
{
	this->d=d;
	this->m=m;
	this->y=y;
}
void Date::Display()
{
	cout<<"DATE:: "<<d<<" "<<m<<" "<<y<<endl;
}
int main()
{
	Date d1;
	d1.Display();
	
	Date d2(4,7,2020);
	d2.Display();
}
