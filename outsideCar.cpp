#include<iostream>
using namespace std;
class car{
		int mileage=0; 
	public:

	
		void drive(int distance);
		void show_data(	string brand ,string model);
};
void car::drive(int distance)
{
	mileage+=distance;
}
void car::show_data(string brand, string model)
{
cout<<"Brand:"<<brand<<endl;
cout<<"Model:"<<model<<endl;
cout<<"Distance driven:"<<mileage<<"miles"<<endl;
		}
main(){
	int a;
	cout<<"Enter the distance:";
	cin>>a;
	string b,c;
	cout<<"Enter the brand and model:";
	cin>>b>>c;
	car obj;
	obj.drive(a);
	obj.show_data(b,c);
}

