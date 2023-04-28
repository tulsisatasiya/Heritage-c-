#include<iostream>

using namespace std;

class square{

	public:

		int a;

		void A(){

			cout<<"Enter a number :- ";
			cin>>a;

			cout<<"Square :- "<<a * a<<endl;
		}
};

class cube : public square{

	public:

		int b;

		void B(){

			cout<<"Cube :- "<<a * a * a<<endl;
		}
};

int main()
{

	cube c;

	c.A();
	c.B();

	return 0;
}

