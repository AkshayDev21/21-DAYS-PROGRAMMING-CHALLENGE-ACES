#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char c1[] = "ACES 21 DAYS ";
	char c2[] = "CHALLENGE";
	cout<<"Concatenation : "<<strcat(c1,c2)<<"\n";
	cout<<"Copy : "<<strcpy(c1,c2)<<"\n";
	cout<<"Length : "<<strlen("ACES")<<"\n";
	return 0;
} 
