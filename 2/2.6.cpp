/*Write a program to overload accept function as below
void accept(char ch, int len) - which accepts string character by character until then length.
void accept(char [])-Which accepts the string directly.
Write main() to call these two functions. also print the output.*/

#include<iostream>
#include<string.h>
using namespace std;

void accept(char[],int);
void accept(char[]);
int main()
{  
    int len;
    char ch[len];
	char word[20];
	cout<<"Enter a size::"<<endl;
	cin>>len;
    accept(ch,len);
	cout<<"Enter a word::"<<endl;
	cin>>word;
	accept(word);
}
void accept(char ch[],int len)
{
	cout<<"Enter a word letter by letter::"<<endl;
	for(int i=0;i<=len;i++)
	{
	//	cout<<"Enter a letter::"<<endl;
		cin>>ch[i];
		
	}
    //ch[len+1]='/0';
    
    cout<<ch<<endl;
}
void accept(char str[])
{
	cout<<str<<endl;
cout<<strlen(str);
}

