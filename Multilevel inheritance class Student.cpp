#include<iostream>
using namespace std;
class Student{
	public:
		int roll;
		void getRoll()
		{
			cout<<"Enter Roll Number:";
			cin>>roll;
		}
};
class Marks:public Student{
	public:
		int m1,m2;
		void getMarks()
		{
			cout<<"Enter Marks 1:";
			cin>>m1;
			cout<<"Enter Marks 2:";
			cin>>m2;
		}
};
class Result:public Marks{
	public:
		void display()
		{
			int total=m1+m2;
			float percentage=total_100/200;
			cout<<"Roll Number:"<<roll<<endl;
			cout<<"Total Marks:"<<total<<endl;
			cout<<"Percentage:"<<percentage<<endl;
		}
};
int main()
{
	 Result r;
	r.getRoll();
	 r.getMarks();
	 r.display();
}
