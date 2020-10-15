/*Write a C++ program in which define a function which will display sum of 1 to 10 numbers
 using call by reference.*/
 
#include<iostream>
using namespace std;
void add(int &);
int main()
{
	int n;
	cout<<"Enter to the number upto which you wanted to print sum::";
	cin>>n;
	add(n);
}
void add(int &n1)
{
	int sum=0;
	for(int i=1;i<=n1;i++)
	{
		sum=sum+i;
	}
	cout<<" Sum of "<<n1<<" numbers is "<<sum;
}
