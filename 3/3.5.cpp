/*/*Construct a class employee with following members.
EmpId, empName, basicSalary, hra, pf, pt, grossSalary, netSalary
Do Following operations
 1.hra=20% of basic Salary
 2.pf=10%basic salry
 3.pt=200rs.
4.Write no-argument and parametrized constructor and also display gross salary and net
salary.
Gross salary=basic salary+hra;
Net salary=gross salry-(pt+pf)
5. Employee id should get generated automatically.
6.Create 3 objects of the class and display gross salary and net salary of all.*/

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	private:
		static int Empid;
		char empName [20];
		float basicSalary,grossSalary,netSalary;
		float hra,pf,pt;
		float calsalary();
	public:
		Employee();
		Employee(const char [],float);
		void EmployeeData(const char [],float);
		float setgrossSalary();
		float setnetsalary();
		void displaydata();
};
int Employee::Empid=0;

Employee::Employee()
{
	cout<<"Default constructor envoked:: ";
	this->Empid=0;
	strcpy(this->empName," ");
	this->basicSalary=0.0f;
	calsalary();
	this->grossSalary=setgrossSalary();
	this->netSalary=setnetsalary();
}
Employee::Employee(const char ename [20],float bsalary)
{
	
	this->Empid=0;
	strcpy(this->empName,ename);
	this->basicSalary=bsalary;
	calsalary();
	this->grossSalary=setgrossSalary();
	this->netSalary=setnetsalary();
}
void Employee::EmployeeData(const char ename [20],float bsalary)
{
	
	this->Empid=0;
	strcpy(this->empName,ename);
	this->basicSalary=bsalary;
	calsalary();
	this->grossSalary=setgrossSalary();
	this->netSalary=setnetsalary();
}
float Employee::calsalary()
{
	
	this->hra=0.20*basicSalary;
	this->pf=0.1*basicSalary;
	this->pt=200;
}
float Employee::setgrossSalary()
{
	
	this->grossSalary=basicSalary+this->hra;
	return (this->grossSalary);
}
float Employee::setnetsalary()
{
	
	this->netSalary=grossSalary-(pf+pt);
	return (this->netSalary);
}

void Employee::displaydata()
{
	cout<<"Employee Details:: "<<endl;
	cout<<"EMP ID:: "<<Empid<<endl;
	cout<<"Employee Name:: "<<empName<<endl;
	cout<<"Basic Salary:: "<<this->basicSalary<<endl;
	cout<<"Gross Salary:: "<<this->grossSalary<<endl;
	cout<<"Net Salary:: "<<this->netSalary;
}


int main()
{
	char  name[20];
	float basicsalary;
	
	Employee e[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter employee name:: ";
		cin>>name;
		cout<<"ENTER BASIC SALARY OF EMPLOYEE:: ";
		cin>>basicsalary;
		
		e[i].EmployeeData(name,basicsalary);
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<"GrossSalary of "<< i <<" is "<<e[i].setgrossSalary()<<endl;
		cout<<"netsalary of "<< i 2<<" is "<<e[i].setnetsalary()<<endl;
	}
}
