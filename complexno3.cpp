#include<iostream>
using namespace std;

	class complex
	{
		float real,imag;
		public:
		int d;
			complex()
			{

				real=0;
				imag=0;
			}
			complex(float a,float b)
			{
				real=a;
				imag=b;
			}
		void getdata()
		{
			cout<<"ENTER THE REAL PART :: ";
			cin>>real;
			cout<<"ENTER THE IMAGINARY PART :: ";
			cin>>imag;
		}

		void display()
		{
			if(imag>=0)
			cout<<real<<"+"<<imag<<"i ";
			else
			cout<<real<<"-"<<imag<<"i";
		}

		complex operator *(complex c1)
		{
			complex c3;
			c3.real=(real*c1.real)-(imag*c1.imag);
			c3.imag=(real*c1.imag)+(imag*c1.real);
			return c3;
		}

		complex operator /(complex c1)
		{
			complex c3;
			d=c1.real*c1.real+c1.imag*c1.imag;
			c3.real=real*c1.real+imag*c1.imag;
			c3.imag=imag*c1.real-real*c1.imag;
			c3.real=c3.real/d;
			c3.imag=c3.imag/d;
			return c3;
		}
		
		friend complex operator +(complex,complex);
		friend complex operator -(complex,complex);
	};

		complex operator +(complex a,complex b)
		{
			complex t;
			t.real=a.real+b.real;
			t.imag=a.imag+b.imag;
			return t;
		}

		complex operator -(complex a,complex b)
		{
			complex t;
			t.real=a.real-b.real;
			t.imag=a.imag-b.imag;
			return t;
		}

	int main()
	{
		int ch;
		float r,i;
		complex c2,c3,c4,c5,c6;
		c2.getdata();
		cout<<"\n ENTER THE REAL PART :: ";
		cin>>r;
		cout<<"ENTER IMAGINARY PART :: ";
		cin>>i;
		complex c1(r,i);
		cout<<"\n TWO COMPLEX NO :: ";
		c1.display();
		c2.display();
		do
		{
			cout<<"\n 1. ADDITION \n 2. SUBSTRACTION \n 3. MULTIPLICATION \n 4. DIVISION \n 5.EXIT \n ENTER CHOICE :: ";
			cin>>ch;
			switch(ch)
			{
				case 1: cout<<"\n ADDITION :: ";
					c3=c1+c2;
					c3.display();
					break;

				case 2: cout<<"\n SUBSTRACTION :: ";
					c4=c1-c2;
					c4.display();
					break;

				case 3: cout<<"\n MULTIPLICATION :: ";
					c5=c1*c2;
					c5.display();
					break;

				case 4: cout<<"\n DIVISION :: ";
					c6=c1/c2;
					c6.display();
					break;
		}
		}while(ch!=5);
	}
