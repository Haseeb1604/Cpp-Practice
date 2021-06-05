# include <iostream>
//# include <conio.h>
//# include <stdlib.h>
using namespace std;
main()
{
	
	int choice;
	cout<<"1. Shutdown Your Computer \n";
	cout<<"2. Restart Your Computer \n";
	cout<<"\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"Your system will be shutdown after 20 seconds \n";
				system("c:\\windows\\system32\\shutdown /s /t 20 \n\n");
				break;
		case 2 : cout<<"Your system will be restarted in 20 seconds\n";
				system("c:\\windows\\system32\\shutdown /r /t 20\n\n");
				break;
		default : cout<<"Wrong Choice..!!\n";
	}

}
