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
				cout<<"Enter a Name:";
				cin>>name;
				cout<<"Enter a Age:";
				cin>>age;
			}
};
class Student:public Person{
	protected:
		int roll;
		public:
		void getRoll()
		{
			getPerson();
			cout<<"Enter Roll Number:";
			cin>>roll;
		}
		
};
class Teacher:public Person{
	protected:
		string Subject;
		public:
			void getTeacher()
			{
				getPerson();
				cout<<"Enter a subject:";
				cin>>Subject;
			}
		
};
class School:public Student,public Teacher{
	public:
		void displayDetails()
		{
			cout<<"   Student Details:   "<<endl;
		cout<<"Student Name:"<<Student::name<<endl;
		cout<<"Student Age:"<<Student::age<<endl;
		cout<<"Roll Number:"<<roll<<endl;
		cout<<"   Teacher Details:   "<<endl;
		cout<<"Teacher Name:"<<Teacher::name<<endl;
		cout<<"Teacher Age:"<<Teacher::age<<endl;
		cout<<"Subject:"<<Subject<<endl;
	}
};
int main()
{
	School s;
	s.getRoll();
	s.getTeacher();
	s.displayDetails();
}
