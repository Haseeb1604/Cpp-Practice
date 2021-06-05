#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int num, orig, rev=0, rem;
	do{
	system("cls");
	cout<<"Enter a number : ";
	cin>>num;
	orig=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<rev;
	system("pause");
   }while(true);
}
