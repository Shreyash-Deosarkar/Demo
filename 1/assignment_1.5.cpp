/*Write a program that has main() function in that call a user-defined function that takes a Celsius
Temperature value as an argument and then returns the equivalent Fahrenheit value.
The program should request the Celsius value as input from the user and display
The result, as shown in the following example.
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
For reference, here is the formula for making the conversion:
Fahrenheit = 1.8 × degrees Celsius + 32.0.*/

#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Please enter a Celsius value:";
	cin>>temp;
	cout<<temp<<" degree Celsius is "<<(1.8*temp+32)<<" degrees Fahreheit.";
}
