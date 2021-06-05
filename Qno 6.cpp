#include <iostream>
using namespace std;
class matrix
{
	private:
		int mat[2][2];
		public:
			void get();
			void out();
			matrix operator -(matrix x);
			matrix operator --();
			matrix operator --(int);
			matrix operator *=(matrix x1);

};
void matrix::get()
{
	cout<<"Enter number matrix:";
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cin>>mat[i][j];
		}
	}
}
void matrix::out()
{
	for (int i=0; i<2; i++)
	{
		cout<<" ";
		for (int j=0; j<2; j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
matrix matrix::operator -(matrix x1)
{
	matrix mt;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			mt.mat[i][j]=mat[i][j]-mat[i][j];
		}
	}
	return mt;
}
//matrix matrix::operator --()
//{
//	matrix t;
//	for(int i=0; i<2; i++)
//	{
//		for (int j=0; j<2; j++)
//		{
//			t.mat [i][j]=--mat[i][j];
//			
//		}
//	}
//	return t;
//}
matrix matrix::operator --()
{
	matrix t;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			t.mat[i][j]=--mat[i][j]
		;}
	}
	return t;
}
matrix matrix::operator *=(matrix x1)
{
	matrix product;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			product.mat[i][j]=0;
		}
	}
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			for (int k=0; k<2; k++)
{  
product.mat[i][j]+=mat[i][k]*x1.mat[k][j];
		}		}
	}
	return product;
}
int main()
{
	matrix m1, m2, m3;
	m1.get();
	m1--;
	cout<<"\nfirst matrix"<<endl;
	m1.out();
	m2.get();
	--m2;
	
	
	cout<<"\nsecond matrix"<<endl;
	m2.out();
	m3=m1-m2;
	cout<<"\nsubstraction matrix"<<endl;
	m3.out();
	
	m3=m1*=m2;
	cout<<"\nmultiplication matrix"<<endl;
	m3.out();
	return 0;
}
