#include<iostream>
using namespace std;
class oper
{
	public:
	double a,b;
	void getdata();
	void division();
};

void oper :: getdata()
{
	cout<<"ENTER THE TWO NUMBERS A AND B:"<<endl;
	cin>>a>>b;
}

void oper :: division()
{
	try
	{
		if(b!=0)
		{
			cout<<"DIVISION IS: "<<a/b<<endl;
		}
		else
		{
			throw(b);
		}
	}
	catch(double i)
	{
		cout<<"OPERATION NOT POSSIBLE..."<<endl;
		getdata();
		division();
	}
}

int main()
{
	oper obj;
	obj.getdata();
	obj.division();
	return 0;
}
