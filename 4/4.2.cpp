/*2.	Create a class Integer and overload below operators. Interger class have two interger type variables as data members.
A.	Write default Constructor parameterized constructors
B.	Write getter and setter functions for class Integer
C.	Overload +(binary operator),++(pre),++(post),==(comparison)
D.	Write Display function which will display that number.
*/
#include<iostream>
using namespace std;
class Integer
{
	int a;
	
	public:
		Integer();
		Integer(int);
		void setData(int);
		int getData();
		Integer operator+(Integer);   //binary +
		Integer operator++();         //pre
		Integer operator++(int);   //POST
		void display();
};
Integer::Integer()
{
	this->a=0;
	
}
Integer::Integer(int x)
{
	this->a=x;
}
void Integer::setData(int x)
{
	this->a=x;
}
int Integer::getData()
{
	return (this->a);
}
Integer Integer::operator+(Integer I1)     //I1.add(I2)
{
	Integer temp;
	temp.a=this->a+I1.a;
	return (temp);
}
Integer Integer::operator++()
{
	Integer temp;
	temp.a=++this->a;
	return (temp);
}
Integer Integer::operator++(int)
{
	Integer temp;
	temp.a=this->a++;
	return (temp);
}
void Integer::display()
{
	cout<<" A= "<<a<<endl;
}

int main()
{
	Integer I1;
	I1.setData(3);
	I1.display();
	Integer I2;
	I2.setData(5);
	I2.display();
	Integer I3;
	I3=I1+I2;      //I1.ADD(I2);
	I3.display();  
	I3.operator++();
	I3.display();
	I3.operator++();
	I3.display();
	 
}
