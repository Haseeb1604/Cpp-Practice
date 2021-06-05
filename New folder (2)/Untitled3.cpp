#include <iostream>
#include <windows.h>
using namespace std;
//twinkle twinkle
//CC GG AA G
//FF EE DD C
//GG FF EE D
//GG FF EE D
//CC GG AA G
//FF EE DD C
void playnote (char g, float l)
{
char n = g;
if (n == 'A'||'a'){
Beep(2750,l*1000);
cout <<n;
}
else if(n == 'B'||'b'){
Beep(3087,l*1000);
cout << n;
}
else if(n == 'C'||'c'){
Beep(1637,l*1000);
cout << n;
}
else if(n == 'D'||'d'){
Beep(1835,l*1000);
cout << n;
}
else if(n == 'E'||'e'){
Beep(2060,l*1000);
cout << n;
}
else if(n == 'F'||'f'){
Beep(2183,l*1000);
cout << n;
}
else if(n == 'G'||'g'){
Beep(2450,l*1000);
cout << n;
}
}
 
int main() {
playnote('C', 0.4);
playnote('C', 0.4);
playnote('G', 0.4);
playnote('G', 0.4);
playnote('A', 0.4);
playnote('A', 0.4);
playnote('G', 0.4);
Sleep(400);
cout<<endl;
playnote('F', 0.4);
playnote('F', 0.4);
playnote('E', 0.4);
playnote('E', 0.4);
playnote('D', 0.4);
playnote('D', 0.4);
playnote('C', 0.4);
Sleep(400);
cout<<endl;
playnote('G', 0.4);
playnote('G', 0.4);
playnote('F', 0.4);
playnote('F', 0.4);
playnote('E', 0.4);
playnote('D', 0.4);
playnote('G', 0.4);
Sleep(400);
cout<<endl;
playnote('G', 0.4);
playnote('F', 0.4);
playnote('F', 0.4);
playnote('E', 0.4);
playnote('D', 0.4);
playnote('C', 0.4);
playnote('C', 0.4);
Sleep(400);
cout<<endl;
playnote('G', 0.4);
playnote('G', 0.4);
playnote('A', 0.4);
playnote('A', 0.4);
playnote('G', 0.4);
playnote('F', 0.4);
playnote('F', 0.4);
Sleep(400);
cout<<endl;
playnote('E', 0.4);
playnote('E', 0.4);
playnote('D', 0.4);
playnote('D', 0.4);
playnote('C', 0.4);
cout<<endl;
cout << "thanks for listening <3";
return 0;
}
