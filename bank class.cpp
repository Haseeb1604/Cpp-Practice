#include<iostream>
using namespace std;


class Bank{
	
	private:
	   float amount,intrest;
	   int id, age;
	   string name, type_of_account;
	
	public:
		Bank()
			{
				age=0;
				amount=0;
				id=0;
				name="  ";
				type_of_account="Not mentioned";
			}
			
			/////////           Customer Details             ///////
		void  setCustomerInfo(int id){
			this -> id = id;
			cout<<"Account No:"<<id<<endl;
			cout<<"Enter name of customer:";
			cin>>name;
			do
			{
				cout<<"Enter amount";
				cin>>amount;
			}
			while(amount<=5000);        // Initial Limit
			do
			{
				cout<<"Enter Account type: (saving or current)";
				cin>>type_of_account;
			}
			while(type_of_account!="saving"&&type_of_account!="current");
			cout<<"Enter Account Age(years)";
			cin>>age;
			if(age>=1)
			type_of_accountfunction(type_of_account);
				
		}
		
		void getCustomerInfo()
		{
			//  cout<<"Name   :  Account number   :  Current money  :    Time   :      Account Type  "<<endl;
				cout<<name<<"\t\t"<<id<<"\t\t   "<<amount<<"\t    "<<age<<"\t\t  "<<type_of_account<<endl;					
		}		
		
		void deposite(){
			int y;
			do
			{
				cout<<"How many do you want to Deposite";
				cin>>y;
			}
			while(y<=0);
			amount+=y;
			cout<<"Complete deposite :\n";			
		}
		
		void Withdrawl(){
			int a;
			do{
				cout<<"How many do you want to withdrawl";	cin>>a;
			}
			while(a<=0);
				amount-=a;
				cout<<"Complete withdrawl :\n\n";			
		}
		int type_of_accountfunction(string acc)
		{
			type_of_account= acc;
			if(type_of_account=="saving")
			{
				cout<<endl<<"5% intrest added"<<endl;
				intrest=amount/100*5;
				amount += intrest;
			}
			else
			{
				cout<<endl<<"No intrest added"<<endl;
			}
		}
		float Balance()
		{
			return amount;
		}
		
}; 

main()
{
	int choice,i=0,acc;
	int e=0;
	Bank b[20];
    do{
    	system("cls");
    	cout<<">>Menu\n "
	      "1. Add Customer Information\n "
	      "2. Deposit Amount\n "
          "3. Withdraw Amount\n "
          "4. Display Customer Information\n "
	      "5. Check Customer Balance\n "
	      "6. Exit\n "
		  "     Choice : ";
        cin>>choice;
        
        switch(choice)
        {
        	case 1:  b[i].setCustomerInfo(i+1);  
			         system("pause"); 
			         i++; 
					 break;
        	
			case 2:  cout<<"Enter Account Number\n";
			         cin>>acc;
			         b[acc-1].deposite(); 
					 cout<<"Your New Balance is Rs"<<b[acc-1].Balance();   
					 system("pause"); break;
					 
			case 3:  cout<<"Enter Account Number";
			         cin>>acc;
			         b[acc-1].Withdrawl();
			         cout<<"Your New Balance is Rs"<<b[acc-1].Balance();   
					 system("pause"); break;
					 
			case 4:  cout<<"Name    :  Account number   :  Current money  :    Time   :      Account Type  "<<endl;
			         for(int j=0 ; j<i ; j++)
			         b[j].getCustomerInfo();
			         
			         system("pause");
			         break;
			
			case 5:  cout<<"Enter Account Number";
			         cin>>acc;
			         cout<<"Your Balance is Rs"<<b[acc-1].Balance();   
			         system("pause"); break;
			
			case 6:  e=1; break;
			
			default: e=0; break;
		}
	}while(e!=1);
}
