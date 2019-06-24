#include<iostream>
using namespace std;

int x = 10;

int main()
{
	cout<<"Starting of main function "<<endl;
	int x = 5;
	
	cout<<"Printing x's in the main function "<<endl;
	cout<<x<<endl;
	cout<<::x<<endl;
	
	
	{
		cout<<" Starting of inner block of the main function "<<endl;
		int x = 20;
		
		cout<<"Printing x's in the inner block of the main function "<<endl;
		cout<<x<<endl;
		cout<<::x<<endl;
		
		cout<<"End of inner block "<<endl;
	}
	
return 0;
}
