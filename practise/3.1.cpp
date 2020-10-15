
#include<iostream>
#include<string.h>
using namespace std;
class Report
{
	int adno;
	char name[20];
	float marks[5];
    float avg;
    GetAvg();
    
    public:
    	Report();
    	Report(int adno,char  name[],float marks[]);
    	void readInfo(int adno,char name[],float marks[]);
    	void Display();
    	
};
Report::Report();
{
	this->adno=0;
	strcpy(this->name,name);
}
Report::Report(int ad,char nm[],float m[])
{
	this->adno=ad;
	strcpy(this->name,nm);
	this->marks=m;
}
int main()
{
	
}
