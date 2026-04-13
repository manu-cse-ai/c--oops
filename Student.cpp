#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll_no;
		void input(){
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter roll no:";
			cin>>roll_no;
		}
		void display(){
			cout<<"student details:"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Roll number:"<<roll_no<<endl;
		} 
};
int main(){ 
student my_student,x,y,z;
	my_student.input();
	my_student.display();
	x.input();
	x.display();
	y.input();
	y.display();
	z.input();
	z.display();
	
} 
