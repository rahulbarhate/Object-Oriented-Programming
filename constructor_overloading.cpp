#include<bits/stdc++.h>
using namespace std;

class volume
{
	int x,y,z;
	public:
		volume(int a)
		{
			x=a;
		}
		
		volume(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void displaycube();
		void displaycylinder();
		
};


void volume::displaycube()
{
	cout<<x*x*x<<endl;
}


void volume::displaycylinder()
{
	cout<<3.14*x*x*y<<endl;
}


int main()
{
	volume o1(10);
	volume o2(10, 20);
	
	o1.displaycube();
	o2.displaycylinder();
	
}
