//                                                            Task 3
//                               using Structure upto 10 of cars information check on car number
# include <iostream>
using namespace std;
struct cars
{
    int carNo;
	string carName;
	int carEngine;
}stu[10];
bool check( int i )
{
	for(int j=0 ; j<i ; j++)
	{
		if(stu[j].carNo==stu[i].carNo)
		{
			cout<<"\nCar No is reseverd \n"
			  "Please Select a Valid"
			  " Number :- ";
			  return true;
		}
		else
		return false;
    }
}
main()
{
	bool continue1;
	for( int i=0 ; i<10 ; i++ )
	{
		system("cls");
		cout<<"\nEnter Car Details\n";
		cout<<"Enter The Number of Car "<<i+1<<" :- ";
		cin>>stu[i].carNo;
		while(check(i))
		{
		cin>>stu[i].carNo;
	    }
		cout<<"Enter Car "<<i+1<<" Name :- ";
		cin>>stu[i].carName;
		cout<<"How many CC car Engine is :- ";
		cin>>stu[i].carEngine;
		system("pause");	
	}
	cout<<"\nCars Details\n";
	for( int i=0 ; i<10 ; i++ )
	{
		cout<<"  Number of Car :- "<<stu[i].carNo<<endl;
		cout<<"  Name of Car :- "<<stu[i].carName<<endl;
		cout<<"  Car Engine is "<<stu[i].carEngine<<" CC\n\n";	
	}

}
