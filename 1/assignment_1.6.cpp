/*Write a C++ program to write function for finding cube of a number( Use Call by reference).
Print the result in main() function.*/

#include<iostream>
using namespace std;
int cube(int&);
 int main()
{
	int num,result;
	cout<<"Enter a number::";
	cin>>num;
	result=cube(num);
	cout<<result<<" is a cube of "<<num;
	
}
int cube(int &n1)
{
	return(n1*n1*n1);
}
