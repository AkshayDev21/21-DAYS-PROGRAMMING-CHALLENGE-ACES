//AKSHAY NILLE
//SE COMP


#include <iostream>
using namespace std;

void SeatBooking(int seats[7][10], int &rows, int &cols){
    if(rows<1 || rows>7 || cols<1 || cols>10){
        cout<<"Enter Valid number"<<endl;
        cout<<"enter row number : ";
        cin>>rows;
        cout<<"enter colomn number : ";
        cin>>cols;
        SeatBooking(seats, rows, cols);
    }
    else if(seats[rows-1][cols-1] == 0){
        seats[rows-1][cols-1] = 1;
        cout<<"Booking  Successful"<<endl;
    }
    else{
        cout<<"Sorry!!, seats are already booked"<<endl;
        cout<<"Kindly select any other seats"<<endl;
        cout<<"enter row number : ";
        cin>>rows;
        cout<<"enter colomn number : ";
        cin>>cols;
        SeatBooking(seats, rows, cols);
    }
}

void CancelBooking(int seats[7][10], int &rows, int &cols){
    cout<<"enter row number : ";
    cin>>rows;
    cout<<"enter colomn number : ";
    cin>>cols;
    seats[rows-1][cols-1] = 0;
    cout<<"your booking has been canceled"<<endl;
}

void DisplaySeat(int seats[][10]){
    for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
            cout<<seats[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int seats[7][10] = {{0},{0}};
    int rows ,cols ,choice;

    while(true){
    cout<<"Choices : "<<endl;
    cout<<"1. book seats"<<endl;
    cout<<"2. show seats availability"<<endl;
    cout<<"3. cancel the booking"<<endl;
    cout<<"4. Exit"<<endl<<endl;

    cout<<"Enter your choice number : ";
    cin>>choice;

        switch(choice){
            case 1:
                cout<<"enter row number : ";
                cin>>rows;
                cout<<"enter colomn number : ";
                cin>>cols;
                SeatBooking(seats, rows, cols);
                break;
            case 2:
                DisplaySeat(seats);
                break;
            case 3:
                CancelBooking(seats, rows, cols);
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter valid chice"<<endl;
                break;
        }
    }

    return 0;
}