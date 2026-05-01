#include<iostream>
using namespace std;
class Add{
	int a,b;
	public:
		void setdata(int x,int y){
			a=x;
			b=y;
		}
		friend int sum(Add obj);
};
int sum(Add obj){
	return obj.a+obj.b;
}
int main(){
	Add obj;
	int no1,no2;
	cout<<"Enter 2 number:";
	cin>>no1>>no2;
	obj.setdata(no1,no2);
	cout<<"Sum = "<<sum(obj);
}
