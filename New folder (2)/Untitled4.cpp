 #include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdlib.h>
using namespace std;
int main()
{
	PlaySound(TEXT("C:\\mariam.wav"), NULL, SND_FILENAME | SND_ASYNC); 
	system("pause");
	exit(1);
	return 1;
}
