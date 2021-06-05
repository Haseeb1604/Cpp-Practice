# include "Student.h"
# include <iostream>
# include <windows.h>
# include <conio.h>
using namespace std;
Student::Student()
{
    fName='name',lName='last';
    Age=0,Date=0,Month=0;
}
 void Student::getRecord(int Id)
{
    this -> Id=Id;
    cout<<"\nStudent ID : "<<Id<<endl;
    cout<<">>Full Name      :  ";    cin>>fName>>lName;
    cout<<">>Age            :  ";    cin>>Age;
    cout<<">>Date of Birth  :  ";    cin>>Date>>Month>>Year;
    cout<<">>Gender         :  ";    cin>>Gender;
    }

void Student::DisplayRecord(int id)
    {
    cout<<"\nStudent ID : "<<id;
    cout<<"\n >>Full Name     : "<<fName<<" "<<lName;
    cout<<"\n >>Age           : "<<Age<<" Years old";
    cout<<"\n >>Date of Birth : "<<Date<<" / "<<Month<<" / "<<Year;
    cout<<"\n >>Gender        : "<<Gender;
    cout<<"\n";
   }

bool Student::EditRecord(int id)
 {
     int choice;
     bool back=true;
     line:
     cout<<"\nEnter Number to Change\n1) Name\n2) Age\n3) Date of Birth\n4) Gender\n5) Back\n";
     choice=_getch();
     while(choice<'1' && choice>'4')
        goto line;
     switch(choice)
     {
     case '1':
       cout<<"\n\nEnter Full Name : ";       cin>>fName>>lName;       break;
     case '2':
       cout<<"Enter Age : ";                 cin>>Age;                break;
     case '3':
       cout<<"Enter Date of Birth : ";       cin>>Date>>Month>>Year;  break;
     case '4':
       cout<<"Enter Gender : ";              cin>>Gender;             break;
     case '5':
       back = false;  break;
     }
     return back;

 }
