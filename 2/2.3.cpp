/*Write a Menu driven program to write 4 inline functions to show Arithmetic 
operation(ADD,SUB,MUL,DIV)
.write main() function to call all of them*/

#include<iostream>
using namespace std;
inline void Add(int &,int &);
inline void Sub(int &,int &);
inline void Mul(int &,int &);
inline void Div(int &,int &);

int main()
{   

    int n1,n2;
	char ch;
	cout<<"Enter two numbers::";
	cin>>n1>>n2;
	do{
	
	cout<<"1.Addition\n"
	       "2.Substraction\n"
	        "3.Multiplication\n"
	       "4.Division\n"
		   "0.Exit\n";
	cout<<"Enter your choice::";
	cin>>ch;
	switch(ch)
	{
	    case 1:
		    Add(n1,n2);
			break;
		case 2:
		    Sub(n1,n2);
			break;
		case 3:
		    Mul(n1,n2);
			break;
		case 4:
		    Div(n1,n2);
			break;	
     }
 }while(ch!=0);
}

void Add(int &a,int &b)
{
	cout<<"Sum is "<<(a+b);
}
void Sub(int &a,int &b)
{
	cout<<"Substraction is "<<(a-b);
}
void Mul(int &a,int &b)
{
	cout<<"Multiplication is "<<(a*b);
}
void Div(int &a,int &b)
{
	cout<<"Div is "<<(a/b);
}
