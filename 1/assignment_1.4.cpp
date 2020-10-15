/*Write a program that asks the user to enter his or her age. The program then should
Display the age in months:
Enter your age: 29
Your age in months is 384.*/

#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age in years::";
	cin>>age;
	cout<<"Your age in months is "<<(age*12);
}
