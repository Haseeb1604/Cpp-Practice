//    That shows whether the Number is Prime Number or odd Number or Even Number
# include <iostream>
using namespace std;
bool Prime(int n)
{
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
string even(int n)
{
	return Prime(n)?"Prime Number":n%2==0?"Even":"Odd";
}
main()
{
	int number;
	do{
		cout<<"Enter a Number : ";
		cin>>number;
		cout<<number<<" is "<<even(number)<<endl;
	}while(true);
}
