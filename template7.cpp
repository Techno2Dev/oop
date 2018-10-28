#include<iostream>
using namespace std;
template <class t>
class matrix
{
	public:
	t a[5][5];
	int r,c,i,j;
	void get()
	{
		cout<<"enter the number of rows: ";
		cin>>r;
		cout<<"enter the number of columns: ";
		cin>>c;
	}
	void getdata()
	{
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<"enter the elements of matrix";
				cin>>a[i][j];
			}
		}
		
	}
	void display()
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<"\t"<<a[i][j];
			}
			cout<<"\n";
		}
	}
	int validate(matrix<t> m)
	{
		if(r==m.r && c==m.c)
		return 0;
		else
 		return 1;
	}
	void add(matrix<t> m)
	{
		matrix<t> temp;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				temp.a[i][j]=a[i][j]+m.a[i][j];
			
			}
		}
		temp.r=r;
		temp.c=c;
		cout<<"addition is:\n";
		temp.display();
		
	}
	void sub(matrix<t> m)
	{
		matrix<t> temp;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				temp.a[i][j]=a[i][j]-m.a[i][j];
			
			}
		}
		temp.r=r;
		temp.c=c;
		cout<<"subtraction is:\n";
		temp.display();
	}
	void mul(matrix<t> m)
	{
		t sum;
		matrix<t> temp;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<m.c;j++)
			{
				sum=0;
				for(int k=0;k<c;k++)
				sum=sum+(a[i][k]*m.a[k][j]);
				temp.a[i][j]=sum;
			
			}
		}
		temp.r=r;
		temp.c=c;
		temp.display();
	
	}
	void transpose()
	{
		matrix<t> temp;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				temp.a[i][j]=a[j][i];
			
			}
		}
		temp.r=temp.c=r;
		
		temp.display();
	}
};
int main()
{
	int ch,ch1;
	cout<<"1.int"<<"\n"<<"2.float"<<"\n"<<"3.exit"<<"\n";
	cout<<"enter your choice:\n  ";
	cin>>ch1;
	switch(ch1)
	{
		case 1:
			matrix<int> m1,m2;
			do
			{
				cout<<"enter your choice: \n  ";
				cout<<"1.add"<<"\n"<<"2.sub"<<"\n"<<"3.mul"<<"\n"<<"4.transpose"<<"\n"<<"exit";
				
				cin>>ch;
				switch(ch)
				{
					case 1:cout<<"addition is\n  : ";
						m1.get();
						m1.getdata();
						m2.get();
						if(m1.validate(m2)==1)
						{
							cout<<"operation not possible  \n  ";
							break;
						}
						m2.getdata();
						m1.add(m2);
						break;
				
					case 2:cout<<"subtraction is \n : ";
						m1.get();
						m1.getdata();
						m2.get();
						if(m1.validate(m2)==1)
						{
							cout<<"operation not possible\n  ";
							break;
						}
						m2.getdata();
						m1.sub(m2);
						break;

					case 3:cout<<"multiplication is\n   : ";
						m1.get();
						m1.getdata();
						m2.get();
						if(m1.r!=m2.c)
						{
							cout<<"operation not possible\n  ";
							break;
						}
						m2.getdata();
						m1.mul(m2);
						break;

					case 4:cout<<"transpose is\n: ";
						m1.get();
						m1.getdata();
						m1.transpose();
						break;
				
				}
			}while(ch!=5);
			break;
		case 2:
			matrix<float> m3,m4;
			do
			{
				cout<<"enter your choice:\n   ";
				cout<<"1.add"<<"\n"<<"2.sub"<<"\n"<<"3.mul"<<"\n"<<"4.transpose"<<"\n"<<"exit";
				
				cin>>ch;
				switch(ch)
				{
					case 1:cout<<"addition is \n  : ";
						m3.get();
						m3.getdata();
						m4.get();
						if(m3.validate(m4)==1)
						{
							cout<<"operation not possible\n  ";
							break;
						}
						m4.getdata();
						m3.add(m4);
						break;
				
					case 2:cout<<"subtraction is :\n  ";
						m3.get();
						m3.getdata();
						m4.get();
						if(m3.validate(m4)==1)
						{
							cout<<"operation not possible\n  ";
							break;
						}
						m4.getdata();
						m3.sub(m4);
						break;

					case 3:cout<<"multiplication is\n   : ";
						m3.get();
						m3.getdata();
						m4.get();
						if(m3.r!=m4.c)
						{
							cout<<"operation not possible\n  ";
							break;
						}
						m4.getdata();
						m3.mul(m4);
						break;

					case 4:cout<<"transpose is \n : ";
						m3.get();
						m3.getdata();
						m3.transpose();
						break;
				
				}
			}while(ch!=5);
			break;
	}while(ch!=3);
	return 0;
}
