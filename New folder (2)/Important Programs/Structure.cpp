//                                             Question no 1
//                      Assign data to members of a structure variable and display it
# include <iostream>
using namespace std;
struct emp
{
       char name[30];
	   int age;
	   char gender[6];
	   float salary;	
};
main()
{
	emp e1;
	cout<<"Enter Full Name\n";                cin.get(e1.name,30);
	cout<<"Enter Age of Employee\n";          cin>>e1.age;
	cout<<"Enter the Gender of Employee\n";   cin>>e1.gender;
	cout<<"Enter Salary of Employee\n";       cin>>e1.salary;
	
	cout<<"\n\nFull Name of Employee : "<<e1.name;
	cout<<"\nAge of "<<e1.name<<" : "<<e1.age;
	cout<<"\nGender of "<<e1.name<<" : "<<e1.gender;
	cout<<"\nSalary of "<<e1.name<<" : "<<e1.salary;
}
