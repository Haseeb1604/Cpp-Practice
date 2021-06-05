/* C++ Program - Add Digits of Number */
	
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	do{
	system("cls");
	int num, rem=0, sum=0;
	cout<<"Enter a Number :";
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	cout<<"Sum of the digits of "<<temp<<" is "<<sum<<endl;
	system("pause");
	}while(true);
}
