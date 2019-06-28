#include<bits/stdc++.h>
using namespace std;

class Example
{
	int x;
	public:
		static int y;
		void getdata()
		{
			cout<<"Enter the value of x: "<<endl;
			cin>>x;
		}
		
		void putdata()
		{
			cout<<"The value of x is: "<<x<<endl;
		
		}
		
		static void display()
		{
			y=++y;
			cout<<"y: "<<y<<endl;
		}
};


int Example::y;

int main()
{
	Example o;
	o.getdata();
	o.putdata();
	Example::display();
}
