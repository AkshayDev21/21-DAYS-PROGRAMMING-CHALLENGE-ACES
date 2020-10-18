using namespace std;
#include<iostream>
class GrandParent{
	public:
	
	string name;
	
	void get_name(string n){
		name = n;
	}
	void put_name(){
		cout<<"Name is :"<<name;
	}
	
};

class Parent:public GrandParent{
	public:
		int age;
		void get_age(int a){
			age = a;
		}
		void put_age(){
			cout<<"Age is :"<<age;
		}
};

class Child:public Parent{
	public:
	string gender;
	void get_gender(string g){
		gender = g;
	}
	void put_gender(){
		cout<<"Gender is :"<<gender;
	}
};

int main(){
	Child c;
	c.get_name("Akshay");
	c.get_age(20);
	c.get_gender("Male");
	
	c.put_name();
	cout<<"\n";
	c.put_age();
	cout<<"\n";
	c.put_gender();
	
	return 0;
}
