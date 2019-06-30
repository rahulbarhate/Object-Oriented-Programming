#include <bits/stdc++.h> 
using namespace std; 

class Example
{
	int real, imag;
	public:
		Example(int p, int q)
		{
			real=p;
			imag=q;
		}
		
		void display()
		{
			cout<<"Real: "<<real<<" "<<"Imaginary: "<<imag<<endl;
			
		}
		
		
		Example operator +(Example);
};

Example Example::operator +(Example X)
{
	Example E;
	E.real = real + X.real;
	E.imag = imag + X.imag;
	
	return E;
}


void main()
{
	Example o1(10, 20);
	Example o2(5,5);
	Example o3(0,0);
	cout<<"Addition is: ";
	o3=o1+o2;
	o3.display()
}
