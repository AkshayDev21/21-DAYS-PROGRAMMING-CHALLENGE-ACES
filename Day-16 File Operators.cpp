using namespace std;
#include <fstream>
#include <iostream>

int main(){
	ofstream Myfile("abcd.txt");
	
	Myfile <<"This is Akshay";
	
	Myfile.close();
	
string myText;

ifstream MyReadfile("abcd.txt");

while(getline(MyReadfile, myText))
    cout<<myText;
	
}
