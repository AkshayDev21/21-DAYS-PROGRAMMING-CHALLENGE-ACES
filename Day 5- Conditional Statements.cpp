#include <iostream>
using namespace std;
int main() {
	int a;
	cout <<"Enter a integer number A : ";
	cin >> a;
	int b;
	cout <<"Enter a integer number B : ";
	cin >> b;
	int c;
	cout <<"Enter a integer number C : ";
	cin >> c;
	
	if(a>b){
		if(a>c){
			cout <<"A is the greatest";
		}
	}else{
		if(b>c){
			cout <<"B is the greatest";
		}else{
			cout <<"C is the greatest";
		}
	}
	return 0;
	
}
