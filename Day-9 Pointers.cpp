#include <iostream>
using namespace std;
int main() {
	
	string name = "21 DAYS ACES CHALLENGE";
	
	string *ptr = &name;        // Pointers in C++
	
	cout <<"Value in variable :"<<name;
	
	cout <<"\n\n";
	
	cout <<"Address of variable :"<<ptr;
	
	cout <<"\n\n";
	
	cout <<"Address of variable :"<<&name;
	
	return 0;
}

