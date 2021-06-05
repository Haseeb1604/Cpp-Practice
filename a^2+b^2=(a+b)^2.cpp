# include <iostream>
using namespace std;
int SquareSum(int a,int b)
{
	cout<<(a*a)+(b*b)<<endl;
	return (a*a)+(b*b);
}
int SumSquare(int a,int b)
{
	cout<<(a+b)*(a+b)<<endl;
	return (a+b)*(a+b);
}
main()
{
  cout<<" a^2+b^2 = (a+b)^2\n";
  int j=10;
  for(int i=1;i<10;i++)
  {
  	cout<<" "<<SquareSum(i,j)<<" = "<<SumSquare(i,j)<<endl<<endl;
  	j--;
  }
}
//   Are there a Numbers a and b such that a^2 + b^2 = (a+b)^2
//   Are there a Numbers a, b and c such that a^2 + b^2 + c^2 = (a+b+c)^2
