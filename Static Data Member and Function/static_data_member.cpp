#include<bits/stdc++.h>
using namespace std;

class Example
{
	public:
		static int x;
		void accept()
		{
			x++;
		}
};

int Example::x;

int main()
{
	Example o1,o2,o3;
	cout<<o1.x<<endl;
	cout<<o2.x<<endl;
	cout<<o3.x<<endl;
	
	o1.accept();
	cout<<o1.x<<endl;
	
	o2.accept();
	cout<<o2.x<<endl;
	
	o3.accept();
	cout<<o3.x<<endl;
}
