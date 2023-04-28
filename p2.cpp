#include<iostream>

using namespace std;

class animal {

	private:
		char name[100]="eagle";
		int age=10;

	public:
	void set_value(){
		cout<<name<<endl;
		cout<<age;
	}
};

class Zebra  : public animal{

	public:
		void set_value(){
		cout<<endl<<"Zebra "<<endl<<endl;
	}

};

class Dolphin  : public animal{

	public:
		void set_value(){
		cout<<endl<<"Dolphin animal";
	}
};


int main(){

       Zebra z;
       Dolphin d;

       z.animal::set_value();
       z.set_value();

       d.animal::set_value();
       d.set_value();


	return 0;
}
