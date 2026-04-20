#include<iostream>
using namespace std;
class Marks{
	public:
		int marks1,marks2;
		void getMarks()
		{
			cout<<"Enter the Marks1 and Marks2:";
			cin>>marks1>>marks2;
		}
};
class Result:public Marks{
	public:
		int total,average;
		void getResult()
		{
			total=marks1+marks2;
			average=total/2;
		}
		void display()
		{
			cout<<"Total:"<<total<<endl;
			cout<<"Average:"<<average<<endl;
		}
};
main()
{
	Result R;
	R.getMarks();
	R.getResult();
	R.display();
}
