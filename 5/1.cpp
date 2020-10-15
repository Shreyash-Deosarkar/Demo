/*1.      Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.         

Sample Output:

             Input First Name: Technologies
             Input Last Name: Infoway
             Name in reverse is: Infoway Technologies*/
             
#include<iostream>
using namespace std;
int main()
{
	char firstname[20];
	char lastname[20];
	cout<<"Enter your first name:: "<<endl;
	cin>>firstname;
	cout<<"Enter your last name:: "<<endl;
	cin>>lastname;
	cout<<"Name in reverse is: "<<lastname<<" "<<firstname;
}
