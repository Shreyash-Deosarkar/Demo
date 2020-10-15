//Create a Project called Project056 in Assignment056 with program name Question_056_1 .Define a
/*class Report with the following specification:
Data members :Private
dno 4 digit integer admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject.*/
/*Member function: Public
No argument constructor which intialize all members to 0.
Parameterized constructor as Report(int adno, char name[], float marks[]) (Make use of this
keyword).
readInfo() function to accept values for adno, name, marks. Invoke the function
GETAVG()
displayInfo() function to display all data members of report on the screen.
You should give function definitions. create the object of this class on heap*/

#include<iostream>
#include<string.h>
using namespace std;
class ClassReport
{
	private:
		int i;
		int adno;
	    char name[20];
		float marks[5];
		float GETAVG();
		float avg;
		
	public:
		ClassReport();
		ClassReport(int , char[], float[]);
		void readInfo(int ,char [],float []);
		void displayInfo();
};
ClassReport::ClassReport()
	    { 
            cout<<"default constructor invoke"<<endl;    
	    	adno=0;
	    	strcpy(name,"null");
	        for(i=0;i<5;i++)
			{
				this->marks[i]=0.0f;
			}
		    this->avg=GETAVG();
		}
ClassReport::ClassReport(int a,char n[], float mark[])
        {
        	cout<<"parameterized constructor invoke"<<endl;
            this->adno=a;
            strcpy(this->name,n);
    	     for(i=0;i<5;i++)
			{
				this->marks[i]=mark[i];
			}
		    this->avg=GETAVG();
        }
void ClassReport::readInfo(int adno,char name[],float marks[])
		{ 
	        cout<<"\n accepting the values"<<endl;	
		    int i;
			this->adno=adno;
			strcpy(this->name,name);
	        for(i=0;i<5;i++)
			{
				this->marks[i]=marks[i];
			}
		    this->avg=GETAVG();
	    }
	
	    
float ClassReport::GETAVG()
	    {
	    	cout<<"\n GETAVG function invoke"<<endl; 
			float avg,sum=0;
	    	for(i=0;i<5;i++)
	    	{
	    		sum=sum+this->marks[i];
			}
			avg=sum/5;
			return avg;
		}
		
void ClassReport::displayInfo()
		{
			cout<<"\n adno="<<adno<<endl;
			cout<<"\n name="<<this->name<<endl;
		    cout<<"\n marks=";
			int i;
			for(i=0;i<5;i++)
			{
				cout<<this->marks[i]<<",";
			}
			cout<<"\n avg="<<GETAVG()<<endl;
		}
		
//client code
//#include"Assignment3_1.h"

int main()
{
	ClassReport c;
	c.displayInfo();
 
{
    int i;float marks[5];char name[20];
	cout<<"\n*****enter the name*****"<<endl;
	cin>>name; 
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
	}
	ClassReport *c1=new ClassReport(1,name,marks);
    c1->displayInfo();
}

	
	int i;float marks[5];char name[20];
	cout<<"\n*****enter the name*****"<<endl;
	cin>>name; 
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
	}
	ClassReport *c2=new ClassReport(2,name,marks);
	c2->readInfo(2,name,marks);
	c2->displayInfo();
	
	
	
	return 0;
}
