#include<iostream>
using namespace std;
class Student{
	string fName,lName;
    int Age;
    int Date;
    int Month;
    double Year;
    char Gender[6];
	public:
    int Id;
		 void getRecord(int Id)
	   {
	   	  this -> Id=Id;
	   	  cout<<"\nStudent ID : "<<Id; 
	   	  cout<<"\nFull Name : ";
		  cin>>fName>>lName;
	   	  cout<<"Age : ";
		  cin>>Age;
	   	  cout<<"Date of Birth : (Date)/(Month)/(Year) ";
		  cin>>Date>>Month>>Year;
	   	  cout<<"Gender : ";
	   	  cin>>Gender;
		 } 
		void DisplayRecord(int id)
		{
		  cout<<"\nStudent ID : "<<id;
	   	  cout<<"\nFull Name : "<<fName<<" "<<lName;
	   	  cout<<"\nAge : "<<Age;
	   	  cout<<"\nDate of Birth : (Date)/(Month)/(Year) "<<Date<<" / "<<Month<<" / "<<Year;
	   	  cout<<"\nGender : "<<Gender;
		}
};
class menu {
	int choice,i,record;
	public:
		menu(int record)
		{
			i=0;
			this ->record=record;
		}		
		int DisplayMenu()
		{
			system("cls");
			cout<<"\n\t\tStudent Record\n";
			cout<<">>Menu\n";
			cout<<"1) Enter Student Record\n"
			      "2) Display All Student Record\n"
			      "3) Exit\n"
			      " Choice : ";
			cin>>choice;
			return choice;
		}
		bool setrecord(int c)
		{
		Student s[record];
			switch(c)
			{
				case 1:
					int ch;
					do{
					s[i].getRecord(i+1);
					i++;
					cout<<s[i].Id<<endl<<i<<endl;
					line:
					cout<<"1) Add More Record\n2) Back\nchoice : ";
					cin>>ch;
					if(ch<1&&ch>2)
					{
						cout<<"Invalid Choice\n";
						goto line;
					}
				    }while(ch!=2);    
					break;
				return true;
				case 2:
					cout<<"Displaying Record\n"
					;for(int j=0;j<=s[i].Id;j++)
					{
						s[j].DisplayRecord(j+1);
					}
					system("pause");
					return true;
				case 3:
					return false;
					break;
				default:
				DisplayMenu();
						break;
			}
		}
		
};
main()
{
	bool Exit;
	int l;
	cout<<"Enter Limit of Student Record\n";
	cin>>l;
   menu m(l);
   do{
   Exit=m.setrecord(m.DisplayMenu());
   }while(Exit);
}

