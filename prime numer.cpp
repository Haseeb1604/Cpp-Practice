#include <iostream>
using namespace std;
int main() {
   do{
   	system("cls");
   bool isPrime=true;
   int count;
   cout<<"Enter the value of n:";
   cin>>count;
   
//   for(int n = 2; n < count; n++)
//   { 
	for(int i = 2; i <= count/2; i++)
	{
    if (count%i == 0){  isPrime = false;  break; }
    else{  isPrime=true;  }
    }
    
	if(isPrime == true)
    cout<<count<<" is a Prime Number";
	else
	cout<<count<<" Not a Prime Number\n";
   //}
   cout<<endl;
   system("pause");
   }while(true);
   return 0;
}

