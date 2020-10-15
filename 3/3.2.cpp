/*Create a Project called Project056 in Assignment056 with program name Question_056_2.Create a
class Test with int rollNo; char name[10]; float marks[3]; as data members in private .and it has
below member functions in it.
1. No argument constructor assign 0 to all members
2. Paramterized constructor - Test(int, char [],float []);
3. void accept() –Which accept all the details from user.
4. void display()-Display all the details from user.
5. voidcalculateAvg()- Calculate the average and print it.Write a client code (i.e main() function) to
call these functions using Test class object.*/

#include<iostream>
#include<string.h>
using namespace std;

class Test
{
	int roll_no;
	char name[10];
	float marks[3];
	public:
		Test();
		Test(int,char [],float []);
		void accept(int,char [],float []);
		void display();
		void calculate_avg();
};
Test::Test()
{
	roll_no=0;
	strcpy(name,NULL);
	for(int i=0;i<=3;i++)
	{
		this->marks[i]=0.0f;
	}
}
Test::Test(int roll,char nm[10],float m[3])
{
	this->roll_no=roll;
	strcpy(this->name,nm);
	for(int i=0;i<=3;i++)
	{
		this->marks[i]=m[i];
	}
}
void Test::accept(int a,char name[],float marks [])
{
	cout<<"ACCEPT the DETAILS::";
	this->roll_no;
	this->name;
	for(int i=0;i<=3;i++)
	{
	   this->marks[i]=marks[i];
	}
}
void Test::display()
{
	cout<<"ROLL NO:: "<<roll_no<<endl;
	cout<<"Name:: "<<name<<endl;
	cout<<"Marks:: ";
	for(int i=0;i<=3;i++)
	{
		cout<<this->marks[i]<<",";
	}
}
void Test::calculate_avg()
{
	float avg,sum=0;
	for(int i=0;i<=3;i++)
	{
		sum=sum+this->marks[i];
	}
	avg=sum/3;
	cout<<"Avg marks are :: "<<avg;
}

int main()
{
	Test t1;
    t1.display();
    t1.calculate_avg();
    
    float marks[3]={20,10,30};
    
    Test t2(5,'shreys',marks);
    t2.display();
    t2.calculate_avg();
}
