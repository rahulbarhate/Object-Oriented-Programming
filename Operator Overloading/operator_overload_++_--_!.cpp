#include<bits/stdc++.h>
using namespace std;


class Example
{
	int a,b;
	public:
		void accept()
		{
			cout<<"Enter two numbers: ";
			cin>>a>>b;
			cout<<endl;
		}
		
		void display()
		{
			cout<<"The values of a and b are: " <<a<<" "<<b<<endl;
		}
		
		void operator ++();
		void operator --();
		void operator ++(int x);
		void operator --(int x);
		void operator !();
};


void Example::operator ++()
{
	a=++a;
	b=++b;
}


void Example::operator --()
{
	a=--a;
	b=--b;
}

void Example::operator ++(int x)
{
	a=a++;
	b=b++;
}

void Example::operator --(int x)
{
	a=a--;
	b=b--;
}

void Example::operator !()
{
	a=!a;
	b=!b;
}


int main()
{
	Example o;
	o.accept();
	o.display();
	++o;
	o.display();
	--o;
	o.display();
	o++;
	o.display();
	o--;
	o.display();
	!o;
	o.display();
	return 0;
}
