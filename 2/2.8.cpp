/*Write a program to use default argument in an function as follows.
Double Area(double=3.0); //Default value for radius is given as 3.0.
.Write main function to call this function do not provide any parameter.
 It will use default value for calculations print the area of circle..*/
 
#include<iostream>
using namespace std;

double Area(double=3.0);//default arguments
int main()
{
	double r;
	cout<<"AREA Of circle is "<<Area();
}
double Area(double rad)
{
	return(3.14*rad*rad);
}
