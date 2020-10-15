/*Write a Program to overload Copy function as below.(Without using built-in function
Void copy(int dest[],int source[]) –Integer array source should get copied to dest.
Void copy(char dest[], char source[])-Source string should get copied to destination*/
#include<iostream>
using namespace std;
void copy(int [],int []);
void copy(char [],char []);
int main()
{ 
   int dest[5];
   int source[5];
   cout<<"Enter elements of integer array:: "<<endl;
   for(int i=0;i<5;i++)
   {
   	   cin>>source[i];
   }
   char d[20];
   char s[20];
   cout<<"Enter a word::: "<<endl;
   cin>>s;
   copy(dest,source);
	copy(d,s);
}
void copy(int dest[],int source[])
{
	for(int i=0;i<5;i++)
	{
		dest[i]=source[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<dest[i]<<endl;
	}
}
void copy(char d[],char s[])
{
	for(int i=0;i<20;i++)
	{
		d[i]=s[i];
	}
	for(int i=0;i<20;i++)
	{
		cout<<d[i]<<endl;
	}
}
