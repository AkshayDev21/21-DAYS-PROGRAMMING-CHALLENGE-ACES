using namespace std;
#include <iostream>
class Vehicle{
	public:
		int mileage = 30;     //Inheritance
		int cost = 500;
	void put_vehicle_details(){
		cout<<"I am a vehicle ";
		cout<<"\nMileage of vehicle is :"<<mileage;
		cout<<"\nCost of vehicle is :"<<cost;
	}
};

class Car : public Vehicle {
	public:
		string color="blue";
		int tyres = 4;
	void show_car_details(){
		cout<<"I am a Car ";
		cout<<"\nColor of Car is "<<color;
		cout<<"\nNumber of tyres in car are "<<tyres;
	}
};

int main(){
	Car c1;
	c1.put_vehicle_details();
	cout<<"\n";
	c1.show_car_details();
	return 0;
}
