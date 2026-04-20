#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		void getName()
		{
			cout<<"Enter Name:";
			cin>>name;
		}
};
class Employee:public Person{
	public:
		int id;
		void getID()
		{
			cout<<"Enter ID:";
			cin>>id;
		}
};
class Manager:public Employee{
	public:
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"ID:"<<id<<endl;
		}
};
int main(){
	Manager m;
	m.getName();
	m.getID();
	m.display();
}
