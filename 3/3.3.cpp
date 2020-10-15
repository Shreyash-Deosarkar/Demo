/*3. Create a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
batavg =runs/(innings-notout)
calcavg() Function to compute batavg
Public members:
Write No argument constructor to initialize the object.
readdata() Function to accept value from bcode, name, innings, notout and
invoke the function calcavg().
displaydata() Function to display the data members on the screen.
In client code store n batsman details take number from User. Allocate memory on heap
to the object .*/


#include<iostream>
using namespace std;
class batsman
{
	int bcode;
	char bname[20];
	int innings,runs,notout;
	float batavg;
	float calcavg();
	
	public:
	   batsman();
	   void readdata(int ,char[],int,int);
	   void displaydata();	
};
batsman::batsman()
{
	this->bcode=0;
	this->innings=0;
	this->runs=0;
	this->notout=0;
}
void batsman::readdata(int b,char nm[10],int i,int n)
{
	this->bcode=b;
	strcpy(this->bname,nm);
	this->innings=i;
	this->notout=n;
	float calcavg();
}
void batsman::displaydata()
{
	cout<<"BTNO::"<<bcode<<endl;
	cout<<"Name:: "<<name<<endl;
	cout<<"Innings:: "<<i<<endl;
	cout<<"notout:: "<<n;mmm
}
