#include<iostream>
#include<string.h>
#define size 20
using namespace std;
class base1
{	
	protected:
	char name[20];
	char dob[20];
	char bloodgroup[20];
	
	
};
class base2
{
	protected:
	int height,weight;	
};
class base3
{
	protected:
	char policyno[50];
	char address[50];
};
class student:public base1,public base2,public base3
{
	protected:
	char telephoneno[50],drivingli[50];
	public:
	friend class studentdb;
	void get()
	{
		cout<<"\nENTER THE NAME:  ";
		cin>>name;
		cout<<"\nENTER THE DATE OF BIRTH: ";
		cin>>dob;
		cout<<"\nBLOODGROUP IS:  ";
		cin>>bloodgroup;
		cout<<"\nENTER THE HEIGHT:  ";
		cin>>height;
		cout<<"\nENTER THE WEIGHT:  ";
		cin>>weight;
		cout<<"\nENTER POLICY NUMBER:  ";
		cin>>policyno;
		cout<<"\nENTER THE ADDRESS ";
		cin>>address;
		cout<<"\nTELEPHONE NUMBER IS:  ";
		cin>>telephoneno;
		cout<<"\nENTER THE DRIVING LICENSE:  ";
		cin>>drivingli;
	}
	void display()
	{
		cout<<"\n\t"<<name<<"\t"<<dob<<"\t"<<bloodgroup<<"\t"<<height<<"\t"<<weight<<"\t"<<policyno<<"\t"<<address<<"\t"<<telephoneno<<"\t"<<drivingli;
		
	}

};
class studentdb
{
	student s[size];
	int i,n,build;
	public:
	studentdb()
	{
		build=0;
	}
	void built()
	{
		n=0;
		build=1;
		char r;
		do
		{
			if(n<size)
			{
				s[n].get();
				n++;
			}
			else
			{
			cout<<"table is full\n";
			}
			cout<<"do you want to insert more record (y/n)"; 
			cin>>r;
		}while(r=='y');
	}
	void add()
	{
		if(build==0)
		{
			cout<<"built the table\n";
			return;
		}
		if(n<size)
		{
			s[n].get();
			n++;
		}
		else
		{
			cout<<"table is full\n";
		}
	}
	void displayall()
	{
		if(build==0)
		{
			cout<<"built the table\n";
			return;
		}	
		cout<<"\t"<<"name";
		cout<<"\t"<<"dob";
		cout<<"\t"<<"blood group";
		cout<<"\t"<<"height";
		cout<<"\t"<<"weight";
		cout<<"\t"<<"policyno";
		cout<<"\t"<<"address";
		cout<<"\t"<<"telephone no";
		cout<<"\t"<<"driving license";
		for(i=0;i<n;i++)
		{
			s[i].display();
		}
	}
	void search()
	{
		if(build==0)
		{
			cout<<"built the table\n";
			return;
		}	
		int i,flag=0;
		char x[20];
		cout<<"enter the record you want to search";
		cin>>x;
		for(i=0;i<n;i++)
		{
			if(strcmp(s[i].name,x)==0)
			{
				s[i].display();
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	void modify()
	{
		if(build==0)
		{
			cout<<"built the table\n";
			return;
		}	
		int i,flag=0;
		char x[20];
		cout<<"enter the record you want to modify";
		cin>>x;
		for(i=0;i<n;i++)
		{
			if(strcmp(s[i].name,x)==0)
			{
				s[i].display();
				cout<<"insert new data\n";
				s[i].get();
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	void delet()
	{
		if(build==0)
		{
			cout<<"built the table\n";
			return;
		}	
		int i,flag=0;
		char x[20];
		cout<<"enter the name you want to delete";
		cin>>x;
		for(i=0;i<n;i++)
		{
			if(strcmp(s[i].name,x)==0)
			{
				s[i].display();
				cout<<"record deleted\n";
				int j;
				for(j=i;j<n;j++)
				{
					s[j]=s[j+1];
				}
				n--;
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
};


int main()
{
	studentdb m;
	int ch,n,i;
	do
	{	
		cout<<"\nenter your choice \n 1.builttable\n 2.display \n 3.insert\n 4.update\n 5.search \n 6.delete 7.exit";
		cout<<"\nEnter the choice";
		cin>>ch;
		
		switch(ch)
		{
			case 1:cout<<"BUILT TABLE";
					m.built();
				break;
			case 2:cout<<"DISPLAY";
					m.displayall();
				break;
			case 3:cout<<"INSERT";
					m.add();
				break;
			case 4:cout<<" UPDATE";
					m.modify();
				break;
			case 5:cout<<"SEARCH";
					m.search();
				break;
			case 6:cout<<"DELETE";
					m.delet();
				break;
			case 7:cout<<"EXIT";
				break;
				
				
			
		}
		
	}while(ch!=7);
	return 0;

		
}
