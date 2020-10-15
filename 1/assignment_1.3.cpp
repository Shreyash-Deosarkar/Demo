/*/Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)*/
#include<iostream>
using namespace std;
int main()
{
	int distance;
	cout<<"Enter the distance in furlong::";
	cin>>distance;
	cout<<"Distance in yards="<<(distance*220);
}

