#include<iostream>
using namespace std;
class B;
class A{
	private:
		int a;
		public:
			void getdata(int P)
			{
				a=P;
			}
			friend void fun(A,B);
};
class B{
	int b;
	public:
		void getdataB(int Q)
		{
			b=Q;
		}
		friend void fun(A,B);
};
void fun(A obj1,B obj2)
{
	cout<<"Sum="<<obj1.a+obj2.b;
}
int main()
{
	A obj1;
	B obj2;
	int no1,no2;
	cout<<"Enter two number:";
	cin>>no1>>no2;
	obj1.getdata(no1);
	obj2.getdataB(no2);
	fun(obj1,obj2);
}
