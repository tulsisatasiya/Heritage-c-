#include <iostream>

using namespace std;

class a{
	public:
		int id;
		char name[50];
		char role[50];
		int salary;
		int experience;
		char comp_name[50];
		char address[50];
		char email[50];
		int contact;
		
	void setter(){
		cout<<"enter employee id :-  ";
		cin>>id;
		cout<<"enter employee name :-  ";
		cin>>name;
		cout<<"enter employee role :-  ";
		cin>>role;
	}
};
class b:public a{

	public:
		void setter(){
		cout<<"enter employee salary:-  ";
		cin>>salary;
		cout<<"enter employee experience:-  ";
		cin>>experience;
	}
};
class c:public b{
	public:
		void setter(){
		cout<<"enter employee comp_name:-  ";
		cin>>comp_name;
		cout<<"enter employee address:-  ";
		cin>>address;
		}
		void getter(){
		cout<<endl<<"employee name :- "<<name;
		cout<<endl<<"employee role :- "<<role;
		cout<<endl<<"employee salary :- "<<salary<<endl;
		}
};
class d:public c{
	public:
	void setter(){
		cout<<"enter employee email :-  ";
		cin>>email;
		cout<<"enter employee contact :-  ";
		cin>>contact;
	}
	void getter(){
		cout<<"employee id : "<<id;
		cout<<endl<<"employee name :- "<<name;
		cout<<endl<<"employee role :- "<<role;
		cout<<endl<<"employee salary :- "<<salary;
		cout<<endl<<"employee experience :- "<<experience;
		cout<<endl<<"employee comp_name :- "<<comp_name;
		cout<<endl<<"employee address :- "<<address;
		cout<<endl<<"employee email :- "<<email;
		cout<<endl<<"employee contact :- "<<contact<<endl;
	}
};
int main(){

	d emp;
	emp.a::setter();
	emp.b::setter();
	emp.c::setter();
	emp.d::setter();
	emp.c::getter();
	emp.getter();


	return 0;
}
