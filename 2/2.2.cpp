/*Write a inline function to find square of a number.*/
#include<iostream>
using namespace std;
inline int square(int&);
int main()
{
	int num;
	cout<<"Enter a number::";
	cin>>num;
	cout<<"Square of "<<num<<" is "<<square(num);
	
}
int square(int &n)
{
	return(n*n);
}
