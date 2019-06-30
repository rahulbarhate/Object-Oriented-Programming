#include<iostream>
using namespace std;

class Book
{
	string name;
	int pages;
	float price;
	public:
		void accept()
		{
			cout<<"Enter the name of the book: ";
			cin>>name;
			cout<<"Enter the pages of the book: ";
			cin>>pages;
			cout<<"Enter the price of the book: ";
			cin>>price;
		}
		
		
		void display()
		{
			cout<<"The name of the book is: "<<name<<endl;
			cout<<"The number of pages of the book are: "<<pages<<endl;
			cout<<"The price of the book is: "<<price<<endl;
		}
};


int main()
{
	Book b1, b2;
	b1.accept();
	b1.display();
	b2.accept();
	b2.display();
	
}
