#include <iostream>
using namespace std;
int add(int x, int y){    //Function 
	return x+y;
}
double add(double x, double y){  //Function Overloading
	return x+y;
}
int main(){
	cout<<"Add int :"<<add(25,75)<<"\n";
	cout<<"Add double :"<<add(15.6,20.5);
	return 0;
}

