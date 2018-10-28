#include<iostream>
#include<string.h>
using namespace std;

	class book
	{
		char author[30];
		char publisher[30];
		char title[30];
		int stock,price;
		public:
		book();
		void getdata();
		void display();
		int search(char[],char[]);
		void ncopies(int);
	};

	book::book()
	{
		char *author=new char[60];
		char *title=new char[60];
		char *publisher=new char[60];
		price=0;
		stock=0;
	}

	void book::getdata()
	{
		cout<<"\n ENTER AUTHOR :: ";
		cin>>author;
		cout<<"\n ENTER TITLE :: ";
		cin>>title;
		cout<<"\n ENTER PUBLISHER :: ";
		cin>>publisher;
		cout<<"\n ENTER STOCK :: ";
		cin>>stock;
		cout<<"\n ENTER PRICE :: ";
		cin>>price;
	}

	void book::display()
	{
		cout<<"\n\t"<<author<<"\t"<<title<<"\t"<<publisher<<"\t"<<stock<<"\t"<<price;
	}

	int book::search(char t[],char a[])
	{
		if(strcmp(title,t)&&strcmp(author,a))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

	void book::ncopies(int num)
	{
		int n=0;
		if(stock>=num)
		{
			cout<<"\n TITLE IS AVAILABLE... ";
			cout<<"\n COST OF "<<num<<"IS RS."<<(price*num);
		}
		else
		{
			cout<<"\n NOT AVAILABLE... ";
		}
	}

	int main()
	{
		book b[100];
		char bname[50],keytitle[50],keyauthor[50];
		int ch,i,n,flag=0,copies,key=0;
		
		do
		{
			cout<<"\n 1. ENTER DATA \n 2. DISPLAY \n 3. SEARCH \n 4. EXIT ";
			cout<<"\n ENTER THE CHOICE :: ";
			cin>>ch;
			
			switch(ch)
			{
				case 1: cout<<"\n ENTER HOW MANY RECORDS DO YOU WANT TO INSERT :: ";
					cin>>n;
					cout<<"\n DATA";
					for(i=0;i<n;i++)
					{
						b[i].getdata();
					}
					break;

				case 2: cout<<"\t"<<"AUTHOR"<<"\t\t"<<"TITLE"<<"\t\t"<<"PUBLISHER"<<"\t\t"<<"STOCK"<<"\t\t"<<"PRICE";
					for(i=0;i<n;i++)
					{
						b[i].display();
					}
					break;

				case 3: cout<<"\n ENTER TITLE OF REQUIRED BOOK :: ";
					cin>>keytitle;
					cout<<"\n ENTER AUTHOR OF REQUIRED BOOK :: ";
					cin>>keyauthor;
					for(i=0;i<n;i++)
					{
						if(b[i].search(keytitle,keyauthor))
						{
							flag=1;
						cout<<"\t"<<"AUTHOR"<<"\t"<<"TITLE"<<"\t"<<"PUBLISHER"<<"\t"<<"STOCK"<<"\t"<<"PRICE";
						b[i].display();
						key=i;
						}
					}
					if(flag==1)
					{
						cout<<"\n BOOK IS AVAILABLE...";
					}
					else
					{
						cout<<"\n BOOK IS NOT AVAILABLE...";
						break;
					}
			}
		}while(ch!=4);
		return 0;
	}
