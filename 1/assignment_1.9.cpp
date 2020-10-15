/*rite a C++ program to allocate memory for n subjects and calculate average of it.
For example consider n=5 then allocate memory for 5 integers using new operator
Calculate the average and disply it.Also deallocate the memory. Usng delete operator.*/

#include<iostream>
using namespace std;
int main()
{
    int *sub=new int[5];
    cout<<"Enter the marks of 5 subjects::";
	for(int i=1;i<=5;i++){
		cin>>sub[i];
	}
	
	int sum=0;
	for(int i=1;i<=5;i++)
	{
		sum=sum+sub[i];
	}
	float avg;
	avg=sum/5;
	cout<<"Avarage is "<<avg;
	
	delete sub[];
	
}
