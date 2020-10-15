/*6. Define a class to represent a bank account. Include the following members:
Data Members a. Name of the depositor
b. Account number
c. Type of account
d. Balance amount in the account Member functions
a. To assign initial values add Constructors Account number shoud be generated
automatically
b. To deposit an amount
c. To withdraw an amount after checking the balance
d. To display name and balance. (Provide Menu for above)
e. Destructors.
f. add the above infomarion for 'n' customers.(Dynamic)
g. Add Static function to display number of objects created*/

#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
	private:
		char nameOfDepositor[20];
		static int accountNo;
		char typeOfAccount[10];
		float balance;
		static int count;
		
	public:
		BankAccount();
		BankAccount(const char[],const char[]);
		void deposite(float);
		void withdraw(float);
		void display();
		void NumberOfObjectCreated();    	
};
int BankAccount::accountNo=5005;
int BankAccount::count=0;

BankAccount::BankAccount()
{
	this->count++;
	strcpy(this->nameOfDepositor," ");
	accountNo=00;
	strcpy(this->typeOfAccount," ");
}
BankAccount::BankAccount(const char nameOfDepositor[],const char typeOfAccount[])
{
	this->count++;
	strcpy(this->nameOfDepositor,nameOfDepositor);
	strcpy(this->typeOfAccount,typeOfAccount);
	this->accountNo=accountNo+11;
}
void BankAccount::deposite(float amount)
{
	this->balance=balance+amount;
	cout<<amount <<" rs is Deposited to your account successfully."<<endl;
	cout<<"Your new balance is:: "<<balance;
}
void BankAccount::withdraw(float amount)
{
	if(balance>0 && balance>amount)
	{
	 this->balance=balance-amount;
	 cout<<amount<<" is withdrawn successfully from your account and your new balance is:: "<<balance<<endl; 
	 cout<<"New balance:: "<<balance<<endl;
	 }
    else
	{
		cout<<"Insufficient balance"<<endl;
	 } 

}
void BankAccount::display()
{
	cout<<"Bank account details:: "<<endl;
	cout<<"Name of account holder::"<<this->nameOfDepositor;
	cout<<"Account Balance:: "<<this->balance<<endl;
}
void BankAccount::NumberOfObjectCreated()
{
	cout<<"Number of object created:: "<<count;
}

int main()
{
	char name[20];
	char typeOfAccount[20];
	float amount;
	char choice;
	int n;
	
	cout<<"Enter your name:: ";
	cin>>name;
	cout<<"Type of account:: ";
	cin>>typeOfAccount;
	
	BankAccount *b=new BankAccount(name,typeOfAccount);
	{
		int ch;
		cout<<"Cash Deposite:1 \n Withdrawn: 2 \n Display Name and Balance: 3 \n"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter amount to deposite:: ";
				cin>>amount;
				b->deposite(amount);
				break;
			case 2:
			    cout<<"Enter amount to withdrawn:: ";
			    cin>>amount;
			    b->withdraw(amount);
			    break;
			case 3:
				b->display();
				break;
			default:
				cout<<"you have entered invalid option::";
		}
		cout<<"Do you want to reapeat ?? \n Enter 4 for yes \n Enter 0 for no"<<endl;
		cin>>choice;
	}while(choice!=0);
	
	b->NumberOfObjectCreated();
	
	}
