using namespace std;
#include <iostream>
class Student{
	public:
		int id;
		string name;
		
	void put_details(int i, string n){
		id = i;
		name = n;
	}
			
	void get_details(){
		cout<<"id :"<<id;
		cout<<"\nname :"<<name;
	}
};

int main(){
	Student s1;
	
	int s_id;
	string s_name;
	
	cout<<"Enter Id of Student :";
	cin>>s_id;
	
	cout<<"Enter name of Student :";
	cin>>s_name;
	
	s1.put_details(s_id, s_name);
	s1.get_details();
}
