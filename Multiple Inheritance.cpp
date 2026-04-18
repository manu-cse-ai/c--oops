#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		int empid;
		string empName;
		void showEmployee()
		{
			cout<<"Enter empid :";
			cin>>empid;
			cout<<"Enter empName:";
			cin>>empName;
		}
};
class Salary{
	public:
		float basicsalary;
	    float pf;
		int total;
		void getSalary()
		{
			cout<<"Enter basic salary :";
			cin>>basicsalary;
			cout<<"Enter PF:";
			cin>>pf;
			
		}
};
class Allowance:public Employee,public Salary{
	public:
		float total;
		void calculatesalary()
		{
			total=basicsalary-pf;
		}
		void display()
		{
			cout<<"  Employee Details:  "<<endl;
			cout<<"Enter EmpID:"<<empid<<endl;
			cout<<"Enter EmpName:"<<empName<<endl;
			cout<<"Enter Basic Salary:"<<basicsalary<<endl;
			cout<<"Enter PF:"<<pf<<endl;
			cout<<"Total Salary:"<<total<<endl;
		}
};
main()
{
Allowance A;
A.showEmployee();
A.getSalary();
A.calculatesalary();
A.display();
}
