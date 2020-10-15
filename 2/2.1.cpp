/*Write inline function in C++ to find maximum of two numbers.*/

#include<iostream>
using namespace std;
inline void max(int &,int &);
int main()
{
	int n1,n2;
	cout<<"Enter two numbers::"<<endl;
	cin>>n1>>n2;
	max(n1,n2);
}
void max(int &num1,int &num2)
{
	int result;
	result=(num1>num2)?num1:num2;
	cout<<" Max number is:"<<result;

}
