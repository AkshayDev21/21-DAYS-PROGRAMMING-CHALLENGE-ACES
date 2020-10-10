#include <iostream>
using namespace std;
int main() {
	int a;
	cout <<"Enter a integer number : ";
	cin >> a;
 	switch(a){
	    case 1:
	        cout<<"1 is stored in a";
		    break;
		case 2:
	        cout<<"2 is stored in a";
	        break;
	    case 3:
	        cout<<"3 is stored in a";
	        break;
	    default:
	        cout<<"None of the values match";
	        break;
		
	}
	return 0;
}
