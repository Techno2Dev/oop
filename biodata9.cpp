#include<iostream>
using namespace std;
class personal
{
	protected:
	char name[50],add[50],bod[50],gender;
	public:
	void get_personal();
};
class professional
{
	protected:
	int exp;
	char compyname[50],post[50];
	public:
	void get_professional();
};

class academic
{
	protected:
	int year;
	int marks;
	double percentage;
	char Class[50];
	public:
	void get_academic();
};
class biodata: public personal,public academic,public professional
{
	public:
	void display();
};
void personal::get_personal()
{
	cout<<"Enter name::";
	cin>>name;
	cout<<"Enter Address::";
	cin>>add;
	cout<<"Enter birth date(dd/mm/yyyy)::";
	cin>>bod;
	cout<<"Enter gender(M/F)::";
	cin>>gender;
}
void professional::get_professional()
{
	cout<<"Enter number of years of exp::";
	cin>>exp;
	cout<<"Enter company  name::";
	cin>>compyname;
	cout<<"Enter current post::";
	cin>>post;
}
void academic::get_academic()
{
	cout<<"Enter academic year::";
	cin>>year;
	cout<<"Enter total marks::";
	cin>>marks;
	cout<<"Enter percentage::";
	cin>>percentage;
	cout<<"Enter class::";
	cin>>Class;
}
void biodata::display()
{

 	cout<<"---------------------Employee Biodata--------------"<<endl;
 cout<<"-----------------------------------------------------"<<endl;
 cout<<"____________________Personal Details__________________________"<<endl;
 cout<<"Name::"<<name<<endl;
 cout<<"address::"<<add<<endl;
 cout<<"bod::"<<bod<<endl;
 cout<<"Gender::"<<gender<<endl;
 cout<<"--------------------------------------------------"<<endl;
 cout<<"________________Academic Details________________________"<<endl;
 cout<<"Academic Year "<<"marks "<<"percentage "<<"class "<<endl;
 cout<<year<<"\t\t0"<<marks<<"\t"<<percentage<<"\t"<<Class<<endl;
 cout<<"-------------------------------------------------------"<<endl;
 cout<<"_______________Professional Details____________________"<<endl;
 cout<<"\nCompany Name::"<<compyname;
 cout<<"\nYears of Experince::"<<exp;
 cout<<"\nPost::"<<post;
}
int main()
{
biodata b;
b.get_personal();
b.get_academic();
b.get_professional();
b.display();
}

