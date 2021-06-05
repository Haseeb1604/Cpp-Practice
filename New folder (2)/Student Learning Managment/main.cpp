# include <iostream>
# include <conio.h>
# include <windows.h>
# include "Record.h"
# include "Admin.h"
using namespace std;
main()
{
    bool exit=true;
    char choice;
    do
    {
        system("cls");
        cout<<"\t\tStudent Learning Management System "
              ">>Menu :\n"
              "   1) Admin Login\n"
              "   2) Student Login\n"
              "   3) Exit\n";
        choice=getch();

        switch(choice)
        {
        case '1':
            Admin a;
            a.getstart();
            system("pause");    break;
        //case '2':
          //  cout<<"Code works";
            //system("pause");
            //break;
        //case '3':
          //  exit=false;
            //break;

        }

    }while(exit);

}
