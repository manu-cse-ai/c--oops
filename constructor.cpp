#include<iostream>
using namespace std;
class add{
	int a,b,sum;
	public:
		add(int x,int y){
			a=x;
			b=y;
			sum=a+b;
			cout<<"Sum = "<<sum;
		}
};
main(){
	int a,b;
			cout<<"enter first number:";
			cin>>a;
			cout<<"Enter second number:";
			cin>>b;
	add obj(a,b);
}
