#include<iostream>
#define PI (3.14)
using namespace std;
class area
{
	public:
	double rad,h,b;
	
	virtual void compute_area()
	{
		cout<<" THE COMPUTED AREA IS : "<<endl;
	}
};
class circle: public area
{
	public:
	void getdata()
	{
		cout<<"ENTER THE RADIUS OF CIRCLE :"<<endl;
		cin>>rad;
	}
	
	void compute_area()
	{
		cout<<"\n AREA OF CIRCLE IS : "<<(rad*rad*PI)<<endl;
	}
};

class right_triangle: public circle
{
	public:
	void getdata()
	{
		cout<<"ENTER THE HEIGHT OF TRIANGLE :"<<endl;
		cin>>h;
		cout<<"ENTER THE BASE OF TRIANGLE :"<<endl;
		cin>>b;
	}
	void compute_area()
	{
		cout<<"\n AREA OF RIGHT ANGLED TRIANGLE IS : "<<((h*b)/2)<<endl;
	}
};
int main()
{
	int ch;
	circle c;
	right_triangle t;
	circle *ptr;
	right_triangle *pt;
	do
	{
		cout<<"\n SELECT \n 1.AREA OF CIRCLE \n 2.AREA OF RIGHT ANGLED TRIANGLE \n 3.EXIT \n ENTER YOUR CHOICE : ";
		cin>>ch;
			switch(ch)
			{
				case 1: ptr=&c;
					ptr->getdata();
					ptr->compute_area();
					break;
		
				case 2: pt=&t;
					pt->getdata();
					pt->compute_area();
					break;
				case 3: break;
	
				default: cout<<"\n INVALID CHOICE...";
			}
	}while(ch!=3);
	return 0;	
}
