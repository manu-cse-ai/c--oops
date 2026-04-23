#include<iostream>
using namespace std;
class Animal{
	public:
	virtual void Sound()
		{
			cout<<"Animal makes sound"<<endl;
		} 
};
class Dog : public Animal{
	public:
		void Sound()
		{
			cout<<"Dog Barks"<<endl;
		}
};
class Cat : public Animal{
	public:
		void Sound()
		{
			cout<<"Cat meow"<<endl;
		}
};
int main()
{
	Animal*a;
	Dog d;
	Cat c;
	a = &d;
	a->Sound();
	a = &c;
	a->Sound();
}
