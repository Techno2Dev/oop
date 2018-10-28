#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student
{
	protected:
	int roll;
	char name[50];
	char sub[50];
};
class internal:public virtual student
{
	protected:
	int code;
	int intmarks;
};
class university:public virtual student
{
	protected:
	int unimarks;
};
class final:public internal,university
{
	public:
	void delete1();
	void accept();
	void display1();
	void displayall();
	void search();
	void update();
};
void final::accept()
{
	int n;
	char t;
	do
	{	
		cout<<"\nENTER THE ROLL NO:  ";
		cin>>roll;
		cout<<"\nENTER THE NAME:  ";
		cin>>name;
		cout<<"\nENTER THE SUBJECT: ";
		cin>>sub;
		cout<<"\nENTER SUB CODE:  ";
		cin>>code;
		cout<<"\nENTER INTERNAL MARKS:  ";
		cin>>intmarks;
		cout<<"\nENTER UNIVERSITY MARKS:  ";
		cin>>unimarks;
		n++;
		cout<<"CONTINUE"<<endl;	
		cin>>t;
	}while(t=='y' || t=='Y');	
}

void final::displayall()
{
	cout<<"\n\t"<<roll<<"\t"<<name<<"\t"<<sub<<"\t"<<code<<"\t"<<intmarks<<"\t"<<unimarks;		
}

void final::display1()
{
	cout<<"\n1.Roll no: "<<roll;
	cout<<"\n2.Name: "<<name;
	cout<<"\n3.Subject: "<<sub;
	cout<<"\n4.code: "<<code;
	cout<<"\n5.internal marks: "<<intmarks;
	cout<<"\n6.university marks: "<<unimarks;
	
}

void final::search()
{
	int key; 
	cout<<"Enter roll no\n";
	cin>>key;	
	if(key==roll)
	{
		cout<<"\n\t"<<roll<<"\t"<<name<<"\t"<<sub<<"\t"<<code<<"\t"<<intmarks<<"\t"<<unimarks;
	}
	else
	{
		cout<<"Given roll no is not present"<<endl;	
	}
}

int main()
{
	final m;
	int ch;
	char p;	
	do
	{	
		cout<<"\nenter your choice\n1.accept info.\n2.display_all\n3.display_1\n4.search\n5.exit";
		cin>>ch;
		
		switch(ch)
		{
			case 1:cout<<"accept information";
					m.accept();				
					break;
			case 2:cout<<"Display";
					m.displayall();				
					break;
			case 3:cout<<"Display1";	
					m.display1();					
					break;
			case 4:cout<<"search";
					m.search();
					break;
			case 5:break;
		}
		cout<<"\nDo you wants to conti(y/n):=";
		cin>>p;
	  }while(p=='y' || p=='Y');		
}		
