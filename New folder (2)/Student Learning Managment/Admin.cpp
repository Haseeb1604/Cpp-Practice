#include "Admin.h"
# include <iostream>
# include <conio.h>
# include <windows.h>
using namespace std;
Admin::Admin()
{
    username[8] = 'Admin';
    password[12] = 'Adminlogin';
    setpass[12] = '0000';
}

void Admin::setpassword()
{
    bool choice;
    cout<<"\t\tSetting New Password\n";
    cout<<"Enter Old Password\n";
    do
    {
        cin>>setpass[12];
        if(setpass[12]==password[12]){ choice=false; }
        else{ choice=true; cout<<"Please Enter Correct Password\n"; }
    }while(choice);
    cout<<"Enter New Password\n";
    cin>>password[12];
}
void Admin::getpassword()
{
    bool check;
    char un[8];
    char pw[12];
    cout<<"Enter UserName";
    do
    {
        cin>>un;
        cout<<un<<endl;
        if(un==username)
            {
                check = false;
                cout<<username<<endl<<un<<"false";
             }
        else
            {
                check = true;
                cout<<username<<endl<<un<<"True";
                cout<<"Invalid UserName\n";
            }
    }while(check);
    cout<<"Enter Password";
    do
    {
        cin>>pw;
        if(pw==password){check = false;}
        else{ check = true; cout<<"Invalid Password\n";}
    }while(check);
}

void Admin::getstart()
{
    line:
    system("cls");
    cout<<"Please Enter Your Detail\n";
    getpassword();
    char choice;
    cout<<"Could You want to change Password\n\t( Y or N )";
    choice=getch();
    if(choice == 'Y' || choice == 'y')
        setpassword();
    else if(choice == 'N' || choice == 'n')
     cout<<"No:";
    else
    goto line;
}
