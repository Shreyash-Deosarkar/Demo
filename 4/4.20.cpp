/* 20.Create a Complex class that has real(int) and img(int) as member data, and has getData and showData functions. 
Then also overload the following operators for Complex class. =, ==, +, ++, --, <>
Write a main program that tests the above class.
*/

#include<iostream>
using namespace std;

class Complex
{
	private:
		int img,real;
	public:
		Complex();
		Complex(int,int);
		void getData(int,int);
		void showData();
		Complex operator+(Complex);
		Complex operator++();       //preincrement
		Complex operator++(int);   //postincrement
	 	
};
Complex::Complex()
{
	this->img=0;
	this->real=0;
}
Complex::Complex(int i,int r)
{
	this->img=i;
	this->real=r;
}
void Complex::getData(int a,int b)
{
	this->img=a;
	this->real=b;
}
void Complex::showData()
{
   cout<<img<<"+i"<<real<<endl;
}
Complex Complex::operator++()   //preincrement
{
	Complex temp;
	temp.img=++img;
	temp.real=++real;
	return (temp);
}
Complex Complex::operator++(int)  //postincrement
{
	Complex temp;
	temp.img=++img;
	temp.real=++real;
	return (temp);

}
Complex Complex::operator+(Complex c1)
{
	Complex temp;
	temp.img=this->img+c1.img;
	temp.real=this->real+c1.real;
	return (temp);
}
int main()

{
	Complex c(2,3);
	c.showData();
	c.operator++();//preincrement
	c.showData();
	c.operator++();//postincrement
	c.showData();
	Complex c1(2,1);
	Complex c2=c+c1;    //c.operator+(c1)
	c2.showData();
	
	
}
