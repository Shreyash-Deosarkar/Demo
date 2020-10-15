/*
3.      Write a C++ program to replace all the lower-case letters of
 a given string with the corresponding capital letters*/
 
 #include<iostream>
 #include<string.h>
 using namespace std;
 int main()
 {
 	string str;
 	cout<<"Enter a string: "<<endl;
 	cin>>str;
 	int l=str.length();
 	
 	for(int i=0;i<l;i++)
 	{
 		if(str[i]>='a' && str[i]<='z')
 		    str[i]=str[i]-32;
 		else if(str[i]>='A' && str[i]<='Z')
 		    str[i]=str[i]+32;
	 }
	
	cout<<str;
 }
