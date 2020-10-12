#include <iostream>
using namespace std;
int main() {
	int a[5] = {1,2,3,4,5};    // Integer type array 
	
	for(int i=0;i<5;i++) {
		cout<<a[i]<<' ';
	}
	
	cout<<"\n"<<"***************"<<"\n";
	
	char c[6] = {'A','K','S','H','A','Y'};   // Character type array
	
	for(int i=0;i<6;i++) {
		cout<<c[i]<<' ';
	}
	
	return 0;
}
