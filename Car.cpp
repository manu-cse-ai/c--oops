#include<iostream>
using namespace std;
class car{
	public:
		string brand,model;
		int mileage=0;
		void drive(int distance){
			mileage+=distance;
		}
		void show_data(){
			cout<<"Brand:"<<brand<<endl;
			cout<<"Model:"<<model<<endl;
			cout<<"Distance driven:"<<mileage<<"miles"<<endl;
		}
};
main(){
	car my_car;
	my_car.brand="Mercedes Benz";
	my_car.model="G63";
	my_car.drive(1000);
	my_car.show_data();
}
