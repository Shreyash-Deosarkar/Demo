//Write a program to take input as your name and address and displays your name and address.
/*
#include<iostream>
using namespace std;
int main()
{
	char name[20];
	char add[20];
	cout<<"Enter your name :: "<<endl;
	cin>>name;
	cout<<"Enter your address:: "<<endl;
	cin>>add;
	cout<<"Your name is: "<<name<<endl;
	cout<<"Your address is: "<<add;
	
}
*/

/*Write a program to display the following output using a cout statement.
Subject Marks
Mathematics 90
Computer 77
Chemistry 69*/
/*

#include<iostream>
using namespace std;
int main(){
	cout<<"Subjects"<<"            "<<"Marks"<<endl;
	cout<<"Mathematics"<<"         "<<"90"<<endl;
	cout<<"Computer"<<"            "<<"77"<<endl;
	cout<<"Chemistry"<<"           "<<"69"<<endl;

}
*/
//************************************************* 

/*Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)

#include<iostream>
using namespace std;
int main(){
	int dis;
	cout<<"Enter distance into furlongs:: "<<endl;
	cin>>dis;
	cout<<"Distance is yards= "<<(dis*220);
}
*/
//************************************************
/*Write a program that asks the user to enter his or her age. The program then should
Display the age in months:
Enter your age: 29
Your age in months is 384.*/
/*
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:: "<<endl;
	cin>>age;
	cout<<"Your age in months is "<<(age*12);
}
*/

/*Write a program that has main() function in that call a user-defined function that takes a Celsius
Temperature value as an argument and then returns the equivalent Fahrenheit value.
The program should request the Celsius value as input from the user and display
The result, as shown in the following example.
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
For reference, here is the formula for making the conversion:
Fahrenheit = 1.8 × degrees Celsius + 32.0.

#include<iostream>
using namespace std;
float tempConversion(int);
int main()
{
    int temp;
	cout<<"Enter temperature in celsius: "<<endl;
	cin>>temp;
	tempConversion(temp);
}
float tempConversion(int t){
	cout<<t<<" Celsius= "<<((1.8*t)+32)<<" Fahrenheit";
}
*/

/*Write a C++ program to write function for finding cube of
 a number( Use Call by reference).
Print the result in main() function.
#include<iostream>
using namespace std;
void cube(int&);
int main(){
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	cube(n);
}
void cube(int &num){
	cout<<num<<"^3= "<<(num*num*num);
}
*/
//*********************************
/*Write a C++ program in which define a function which will display 
sum of 1 to 10 numbers using call by reference.*/
/*
#include<iostream>
using namespace std;
void sum(int &);
int main(){
	int n=1;
    sum(n);
}
void sum(int &num)
{
	int sum=0;
	for(int i=1;i<=10;i++){
		sum=sum+i;
	}
	cout<<"Sum= "<<sum;
}
*/
//*******************************
/*Write a C++ program to write function for doing 
swapping of two integers using (call by address & Call by reference)


#include<iostream>
using namespace std;
void swap(int*,int*);
void swap(int&,int&);
int main(){
	int n1,n2;
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	cout<<"Before swapping: "<<n1<<" "<<n2<<endl;
	swap(&n1,&n2);
	swap(n1,n2);
}
void swap(int *n1,int *n2)// call by address
{
	int *temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"After swapping: "<<*n1<<" "<<*n2<<endl;
}
void swap(int &n1,int &n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"After swapping: "<<n1<<" "<<n2;
}
*/
//********************************************

/*Write a C++ program to allocate memory for n subjects and calculate average of it.
For example consider n=5 then allocate memory for 5 integers using new operator
Calculate the average and disply it.Also deallocate the memory. Usng delete operator.*/
#include<iostream>
using namespace std;
int main(){
	int n;
		int sum=0;
	cout<<"Enter number of subjects:  "<<endl;
	cin>>n;
	
	int *sub=new int[n];
	cout<<"Enter marks of "<<n<<" subjects:: "<<endl;
	for(int i=1;i<=n;i++){
		cin>>sub[i];
	}
	for(int i=1;i<=n;i++){
	
		sum=sum+sub[i];
	}
	float avg=0;
	avg=sum/n;
	cout<<"Avg= "<<avg;
	delete []sub;
}
