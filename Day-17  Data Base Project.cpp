//Akshay Nille
//SE Computer
#include<iostream>			
#include<string.h>			
using namespace std;			
#define max 100;
class per_info							//stud_info is friend class of per_info
{
    string lic, dob, bldgrp;    //personal information variables
    public:
    per_info();                 //DEFAULT CONSTRUCTOR
    per_info(per_info &);       //COPY CONSTRUCTOR
    ~per_info()                 //DEFINITION AND DECLARATION OF DESTRUCTOR
    {
          cout<<"\nDESTRUCTOR IS CALLED!!!!!"<<endl<<"RECORD DELETED SUCCESSFULLY"<<endl;
    }
    friend class student;                     //FRIEND FUNCTION DECLARE
};
class student   							//STUDENT CLASS
{
    string name, address, year;				//STRING CLASS OBJECTS
    char div;
    int roll_no;
    long mob;
    static int cnt; 						//STATIC VARIABLE 
    public:
    void create(per_info &);				//TO CREATE DATABASE AND PASSED REFERENCE OF PERSONAL INFO OBJECT
    void display(per_info &);			//TO DISPLAY DATABASE
 
    inline static void inccnt()                //STATIC FUNCTION
 
    {
      cnt++;
    }
    inline static void showcnt()               //STATIC FUNCTION
                                      //INLINE FUNCTION
    {
      cout<<"\nTOTAL NO OF RECORDS ARE : "<<cnt;
    }
    student();                           //DEFAULT CONSTRUCTOR
    student(student &);                  //COPY CONSTRUCTOR OF STUDENT CLASS
    ~student()                          //DESTRUCTOR OF STUDENT CLASS
    {
       cout<<"\nDESTRUCTOR IS CALLED!!!"<<endl<<"RECORD DELETED SUCCESSFULLY"<<endl;
    }
};
 
int student::cnt;              //DEFINITION OF STATIC MEMBER
student::student()                //CONSTRUCTOR DEFINITION
{
        name="Akshay Nille";
        address="3059 'A' ward, Tarabai Road, Kolhapur";
        year="SE COMPUTER";
        div='A';
        roll_no='0845';
        mob=9767333097;
}
per_info::per_info()             //CONSTRUCTOR DEFINITION
{
       lic="PQR123456";
       dob="02/08/2001";
       bldgrp="A+";
}
student::student(student &obj)			//DEFINITION OF COPY CONTRUCTOR OF STUDENT CLASS
{
      this->name=obj.name;			//this is a pointer points to the object which invokes it
      this->address=obj.address;	//this-> can be written as name
      this->year=obj.year;
      this->div=obj.div;
      this->roll_no=obj.roll_no;
      this->mob=obj.mob;
}
per_info::per_info(per_info &obj)		//DEFINITION OF COPY CONTRUCTOR OF PERSONAL CLASS
{
     lic=obj.lic;
     dob=obj.dob;
     bldgrp=obj.bldgrp;
}
// CREATE FUNCTION USED
void student::create(per_info &obj)
{
cout<<"\nNAME : "<<endl;
cin>>name;
cout<<"\nADDRESS : "<<endl;
cin>>address;
cout<<"\nDATE OF BIRTH : "<<endl;
cin>>obj.dob;
cout<<"\nYEAR : "<<endl;
cin>>year;
cout<<"\nDIVISION: "<<endl;
cin>>div;
cout<<"\nROLL NUMBER : "<<endl;
cin>>roll_no;
cout<<"\nBLOOD GROUP : "<<endl;
cin>>obj.bldgrp;
cout<<"\nLICEINCE NUMBER : "<<endl;
cin>>obj.lic;
cout<<"\nPHONE NUMBER : "<<endl;
cin>>mob;
}
 
// DISPLAY FUNCTION
void student::display(per_info &obj)
{
cout<<"\n***********************"<<endl;
cout<<"\nNAME OF STUDENT : "<<name<<endl;
cout<<"\nADDRESS OF STUDENT : "<<address<<endl;
cout<<"\nDATE OF BIRTH : "<<obj.dob<<endl;
cout<<"\nYEAR : "<<year<<endl;
cout<<"\nDIVISION : "<<div<<endl;
cout<<"\nROLL NO : "<<roll_no<<endl;
cout<<"\nBLOOD GROUP : "<<obj.bldgrp<<endl;
cout<<"\nLICEINCE NUMBER : "<<obj.lic<<endl;
cout<<"\nPHONE NUMBER : "<<mob<<endl;
cout<<"\n***********************"<<endl;
}
int main()
{
 int n;				//COUNT OF NUMBER OF STUDENTS
 int ch;
 char ans;
 
 cout<<"\nENTER NO OF STUDENTS :"<<endl;
 cin>>n;
 cout<<"\n***********************"<<endl;     //NEW IS DYNAMIC MEMORY ALLOCATION OPERATOR
 student *sobj=new student[n];				//sobj is pointer of type student and it is array of object 
 per_info *pobj=new per_info[n];		//pobj is pointer of type student and it is array of object 
 
 do
 {
	 cout<<"\n Menu \n 1. Create Database \n 2. Display Databse \n 3. Copy Constructor\n 4. Default Constructor \n 5. Delete (Destructor)";
	 cout<<"\n Enter your Choice: ";
	 cin>>ch;
	 switch(ch)
	 {
	 case 1: //create database
	 {
		 for(int i=0;i<n;i++)
		 {
		       sobj[i].create(pobj[i]);
		       sobj[i].inccnt();
 
		 }
	 }
		break;
 	 case 2: //Display Database
  		{
			sobj[0].showcnt(); 	//I used it to display the total count of students
			//we can use any object of student class as it is static member function we know
			 for(int i=0;i<n;i++)
			 {
				 sobj[i].display(pobj[i]);
			 }
    	 }
    	 break;
	  case 3: //Copy Constructor
		{
			 student obj1;
			 per_info obj2;
			 obj1.create(obj2);
			 student obj3(obj1);		//using copy constructor of student information to copy contents from object 1 to 3
 
			 per_info obj4(obj2);		 //using copy constructor of personal information to copy contents from object 2 to 4
			 cout<<"\n Copy Constructor is called ";
			 obj3.display(obj4);
 		}
        break;
	 case 4: // Default Constructor
 		{
			 student obj1;	//obj1 is used as default constructor of class student
			 per_info obj2;	//obj2 is used as default constructor of class personal
			 cout<<"\n Default Constructor is called ";
			 obj1.display(obj2);
 		}
 		break;
	 case 5: // destructor is called by me
 
			 delete [] sobj;			//using destructor with deleting sobj 
 		     delete [] pobj;		//using destructor with deleting pobj 
 	}				//end of switch case
 	cout<<"\n Want to continue:(y/n)"	     ;
 	cin>>ans;
  }while(ans=='y') 	;
 
 
 return 0;
}
