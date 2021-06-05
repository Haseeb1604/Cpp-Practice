/* C++ Program - Add Digits of Number */
	
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int range;
	cout<<"Enter the Range of Array\n";
	cin>>range;
	int array[50];
	for(int i=0 ; i<range ; i++)
	{
		cout<<"Enter Value :-  ";  cin>>array[i];   cout<<endl;
	}
		for(int i=0 ; i<range ; i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<"At which Position You want to insert\n";
	int position;
	cin>>position;
	int abc=position-1;
	for( int i=range ; i>abc ;i--)
	{
		array[i]=array[i-1];
	}
	cout<<"Enter Value in Array\n";
	cin>>array[abc];
	for(int i=0 ; i<=range ; i++)
	{
		cout<<array[i]<<endl;
	}
	
}
