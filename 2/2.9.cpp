/*Write a date class to print the date on console.*/
#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		date();
		date(int,int,int);
		void setDate(int);
		void setMonth(int);
		void setYear(int);
		void display();
};
date::date()
{
	dd=0;
	mm=0;
	yy=0;
}
date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date::setDate(int d)
{
	dd=d;
}
void date::setMonth(int m)
{
	mm=m;
}
void date::setYear(int y)
{
	yy=y;
}
void date::display()
{
	cout<<dd<<" "<<mm<<" "<<yy<<endl;
}


int main()
{
	date d(2,2,2220);n
	d.display();
	date d1;
	d1.display();
}
