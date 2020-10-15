/*6..Create a class called employee that contains a name and an employee number. 
Include a member function called getdata () to get data from the user, another function 
called putdata () to display the data. Write a main() program to exercise this class. 
It should create an array of type employee and then invite the user to input data for n employees.*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	int empNo;
	char empName [20];
	public:
		Employee();
		Employee(int,char []);
		void getData(int ,char []);
		void putData();
};
Employee::Employee()
{
	this->empNo=0;
	strcpy(this->empName," ");
}
Employee::Employee(int n,char name[20])
{
	this->empNo=n;
	strcpy(this->empName,name);
}
void Employee::getData(int n,char name[20])
{
	this->empNo=n;
	strcpy(this->empName,name);
}
void Employee::putData()
{
	cout<<"Employee No:: "<<empNo<<endl;
	cout<<"Employee Name:: "<<empName<<endl;
}


int main()
{
	int n;
	cout<<"Enter the number of employee whose data is to feed:: "<<endl;
	cin>>n;
	
	Employee e[n];
	int no;
	char nm[20];
	
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the emp no and name of "<<i<<" employee::"<<endl;
		cin>>no>>nm;
		e[i].getData(no,nm);
	}
	
	for(int i=0;i<n;i++)
	{
		e[i].putData();
	}
 return 0;
}
