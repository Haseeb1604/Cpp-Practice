# include <iostream>
using namespace std;
string Result(int x,int y)
{
	y=x*x;
	x=(2*x)+3;
	if(x==y)
	return "True";
	else 
	return "False";
}
main()
{
    for(int i=0;i<=10;i++)
    {
    	cout<<" 2*x + 3 = x^2 for x="<<i<<" is "<<Result(i,0)<<endl;
	}
}
