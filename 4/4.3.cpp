/*3.Imagine a publishing company that markets both books and audio cassette versions 
of its works Create a class publication that stores the title (a string) and price (type float) 
of a publication. From this class derive two classes: BOOK, which adds a page count (type int)
 and TAPE, which adds a length count (type int). Each of these three classes should have a getdata() 
 function too get its data from the user at the keyboard, and a putdata( ) function 
 to display its data. Write a main () program to test the book and tape classes by creating 
 instances of them,asking the user to fill in their data with getdata() 
 and then displaying the data with putdata().*/
 
#include<iostream>
#include<string.h>
using namespace std;
class publication
{
	char title[20];
	float price;
	public:
	  publication()
	  {
	  	strcpy(title," ");
	  	price=0;
	  }
	  void getData(char name[20],float p)
	  {
	  	strcpy(title,name);
	  	price=p;
	  }
	  void putData()
	  {
	  	cout<<"Title of the book:: "<<title<<endl;
	  	cout<<"Price of the book:: "<<price<<endl;
	   } 
};

class publication::public book
{
	int pageCount;
	public:
		void getData(int pc)
		{
			pageCount=pc;
		}
		void putData
		{
			cout<<"Page count is:: "<<pageCount<<endl;
		}
};

class publication::public tape
{
	int  lengthCount;
	public:
		void getData(int l)
		{
           lengthCount=l;			
		}
		void putData()
		{
			cout<<"Length count:: "<<lengthCount<<endl;
		}
};


int main()
{
	book b;
	tape t;
	b.getData(Library,250);
	b.putData();
}
