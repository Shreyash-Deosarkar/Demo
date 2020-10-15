/*8. Define a class name Clock with three integer data members for hours, 
minutes and seconds. Perform below operations 
A.	Write no argument and parametrized constructor.
B.	Overload below operators
C.	Binary (+) operator to add two Clock Objects.
D.	Unary (++) pre increment operator to increment values of hours, minutes and seconds.
E.	Display () function to display all the data.*/


#include<iostream>
using namespace std;
class Clock
{
	int hr,min,sec;
	
	public:
		Clock();
		Clock(int,int,int);
		Clock operator+(Clock);
		Clock operator++();
		void display();
};

Clock::Clock()
{
	this->hr=0;
	this->min=0;
	this->sec=0;
}
Clock::Clock(int h,int m,int s)
{
	this->hr=h;
	this->min=m;
	this->sec=s;
}
Clock Clock::operator+(Clock c1)
{
     Clock temp;
	 temp.hr=hr+c1.hr;
	 temp.min=min+c1.min;
	 temp.sec=sec+c1.sec;
	 return (temp);
}
Clock Clock::operator++()
{
	Clock temp;
	temp.hr=++hr;
	temp.min=++min;
	temp.sec=++sec;
	
	return (temp);
}
void Clock::display()
{
	cout<<"Hr:: "<<hr<<endl;
	cout<<"Min:: "<<min<<endl;
	cout<<"Sec:: "<<sec<<endl;
}

int main()
{
	Clock c1(2,15,40);
	c1.display();
	Clock c2(1,15,15);
	c2.display();
	
	Clock c3;
	
	c3=c1+c2;
	c3.display();
	
	c3.operator++();
	c3.display();
	
	
	
}


