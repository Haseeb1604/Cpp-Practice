/* C++ Program - Check Original Equal Reverse or Not */
		
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int num, orig, rev=0, rem;
	cout<<"Enter a number : ";
	cin>>num;
	orig=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(orig==rev)
	{
		cout<<"Reverse is equal to original";
	}
	else
	{
		cout<<"Reverse is not equal to original";
	}
	getch();
}
