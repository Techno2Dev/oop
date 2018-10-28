#include<iostream>
#include<fstream>
using namespace std;
class base
{
	protected:
	char data[40];
	
};
class derived:public base
{
	public:
	void fileip();
	void fileop();
	
};
void derived::fileip()
{
	
	ifstream ifile;
	ifile.open("f.txt");
	cout<<data<<"\n";
	ifile>>data;
	cout<<data<<"\n";
	ifile>>data;
	cout<<data<<"\n";
	ifile>>data;
	cout<<data<<"\n";
	ifile.close();
}
void derived::fileop()
{
	ofstream ofile;
	ofile.open("f.txt");
	cout<<"enter the name :";
	cin.getline(data,50);
	ofile<<data<<endl;
	cout<<"enter the address :";
	cin.getline(data,50);
	ofile<<data<<"\n";
	cout<<"enter the dob :";
	cin.getline(data,50);
	ofile<<data<<"\n";
	ofile.close();
	
}
int main()
{
	derived obj;
	obj.fileop();
	obj.fileip();
	return 0;
}
