#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
		public:
			void getRoll()
			{
				cout<<"Enter Roll Number:";
				cin>>roll;
			}
	void putRoll()
	{
		cout<<"Roll Number:"<<roll<<endl;
			}		
};
class Test:public Student{
		protected:
		int marks1,marks2;
		public:
			void getMarks()
			{
				cout<<"Enter Marks of Subject 1:";
				cin>>marks1;
				cout<<"Enter Marks of Subject 2:";
				cin>>marks2;
			}
	void putMarks()
	{
		cout<<"Marks 1:"<<marks1<<endl;
		cout<<"Marks 2:"<<marks2<<endl;
			}		
};
class Sports{
		protected:
		int sportMarks;
		public:
			void getSports()
			{
				cout<<"Enter Sport Marks:";
				cin>>sportMarks;
			}
			void putSports()
			{
			    cout<<"Sports Marks:"<<sportMarks<<endl;
			}
};
class Result:public Test,public Sports{
	private:
		int total;
		public:
			void displayResult()
			{
				total=marks1+marks2+sportMarks;
			putRoll();
			putMarks();
			putSports();
			cout<<"Total Marks="<<total<<endl;
}
};
int main()
{
	Result r;
	r.getRoll();
	r.getMarks();
	r.getSports();
	r.displayResult();
}
