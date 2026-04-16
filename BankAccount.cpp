#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	int accountnumber;
	string holdername;
	float balance;
	public:
			BankAccount(){
			accountnumber=0;
			holdername="Not set";
			balance=0.0;
		}
		BankAccount(int n,string name){
			accountnumber=n;
			holdername=name;
			balance=0.0;
		}
			BankAccount(int n,string name,float bal){
			accountnumber=n;
			holdername=name;
			balance=bal;
		}
		void display()
		{	
		cout<<"  Data Members:  "<<endl;
			cout<<"Accountnumber = "<<accountnumber<<endl;
			cout<<"holderName = "<<holdername<<endl;
			cout<<"Balance = "<<balance<<endl;		
		}
};
int main(){
	BankAccount obj1;
	obj1.display();
	BankAccount obj2 (1010000,"Rahul");
	obj2.display();
	BankAccount obj3 (1790202,"Mohit",258000);
	obj3.display();	
}

