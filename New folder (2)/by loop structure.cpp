#include <iostream>
using namespace std;
struct record
{
	static int id;
	char name[20];
	int age;
	
};
main()
{
	
	int n;
	cout<<"Enter numbers of record :";
	cin>>n;
	
	cout<<endl<<endl;
    record stu[n];

	for(int i=0; i<=n; i++)
	{
	cout<<"Enter the id of student "<<stu[i].id;
	cout<<"Enter the name of student "<<i+1<<" :";
	cin>>stu[i].name;
	cout<<"Enter the age of student "<<i+1<<" :";
	cin>>stu[i].age;
	cout<<endl;
	
	}
	cout<<endl<<endl;
	for(int j=0; j<n; j++)
	{
	cout<<"Id is :"<<stu[j].id<<endl;
	cout<<"Name is :"<<stu[j].name<<endl;
	cout<<"Age is :"<<stu[j].age<<endl;
	}

	
	
}

