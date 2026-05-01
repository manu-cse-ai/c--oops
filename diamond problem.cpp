#include<iostream>
#include<string>
using namespace std;
class Person{
	protected:
		string name;
		int age;
		public:
			void getPerson()
			{
				cout<<"Enter a name:";
				cin>>name;
				cout<<"Enter a age:";
				cin>>age;
			}
};
class Student:virtual public Person{
	protected:
		int rollno;
		public:
			void getStudent()
			{
				cout<<"Enter a Roll Number:";
				cin>>rollno;
			}
};
class Employee:virtual public Person{
	protected:
		int emp_id;
		public:
			void getEmployee()
			{
				cout<<"Enter a employee id:";
				cin>>emp_id;
			}
}; 
class Manager:public Student,public Employee{
	public:
		void display()
		{
			cout<<"    All Details:   "<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Roll Number:"<<rollno<<endl;
			cout<<"Employee ID:"<<emp_id<<endl;
		}
};
int main()
{

	Manager m;

		m.getPerson();
		m.getStudent();
		m.getEmployee();
		m.display();
}
