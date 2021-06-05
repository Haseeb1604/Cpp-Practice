# include <iostream>
# include <Windows.h>
# include <string>

using namespace std;

HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE); 

void color(int y)
{  
 
    SetConsoleTextAttribute(out, y);  

} 

main()
{
//	for(int i=0;i<19;i++)
//	{
//	 color(i);	cout<<"Color at "<<i<<endl;
//	}
	system("color print")
;
    cout<<"Color Testing \n";
}
