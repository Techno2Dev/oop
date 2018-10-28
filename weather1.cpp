/* IT IS A C++ PROGRAM TO DISPLAY THE RECORDS OF WEATHER */


#include<iostream>
using namespace std;

class weather	//declaring class
{
	public:		//access specifier
		int ltemp,htemp,day,rain,snow;		//declaring variables
		
		weather()		//constructor
		{
			//declaring data members
			day=1;
			ltemp=-1;
			htemp=2;
			rain=1;
			snow=1;
		}

		void getdata()		//declaring function to get data by user
		{
			cout<<"ENTER THE DAY :: \n";
			cin>>day;
			cout<<"ENTER HIGH TEMP :: \n";
			cin>>htemp;
			cout<<"ENTER LOW TEMP :: \n";
			cin>>ltemp;
			cout<<"ENTER THE RAIN :: \n";
			cin>>rain;
			cout<<"ENTER THE SNOW :: \n";
			cin>>snow;
		}

		void display()		//declaring function to display data of weather
		{
			cout<<"\n\t"<<day<<"\t"<<ltemp<<"\t"<<htemp<<"\t"<<rain<<"\t"<<snow;
		}
};

int main()
{
	weather w[10];		//declaring object

	double lowtemp=0,hightemp=0,amountrain=0,amountsnow=0;
	int ch,i,n;
	int day,ltemp,htemp,rain,snow;
	
	do
	{
		//display the message for user to enter their choice

		cout<<"\n1.ENTER DATA \n2.DISPLAY \n3.EXIT ";
		cout<<"\n ENTER YOUR CHOICE :: ";
		cin>>ch;

		switch(ch)
		{
			// case 1 to get records

		case 1: cout<<"HOW MANY RECORDS DO YOU WANT TO INSERT :: \n";
			cin>>n;
			
			for(i=0;i<n;i++)
			{
				w[i].getdata();		//calling function getdata()
			}
			break;

			// case 2 to display records

		case 2: cout<<"\n\t"<<"day"<<"\t"<<"ltemp"<<"\t"<<"htemp"<<"\t"<<"rain"<<"\t"<<"snow";
			
			for(i=0;i<n;i++)
			{
				w[i].display();		//calling function display()
			}
			
			//process for average

			for(i=0;i<n;i++)
			{
				hightemp=hightemp+w[i].htemp;
				lowtemp=lowtemp+w[i].ltemp;
				amountrain=amountrain+w[i].rain;
				amountsnow=amountsnow+w[i].snow;
			}
			
			hightemp=hightemp/n;
			lowtemp=lowtemp/n;
			amountrain=amountrain/n;
			amountsnow=amountsnow/n;
			
			//displaying average

			cout<<"\nAVERAGE IS ::\t"<<lowtemp<<"\t"<<hightemp<<"\t"<<amountrain<<"\t"<<amountsnow<<"\n";

		}
	}while(ch!=3);
	
	return 0;
}

/*=========================================== OUTPUT ==============================================================
1.ENTER DATA 
2.DISPLAY 
3.EXIT 
 ENTER YOUR CHOICE :: 1

HOW MANY RECORDS DO YOU WANT TO INSERT :: 
2
ENTER THE DAY :: 
1
ENTER HIGH TEMP :: 
34
ENTER LOW TEMP :: 
24
ENTER THE RAIN :: 
16
ENTER THE SNOW :: 
4
ENTER THE DAY :: 
2
ENTER HIGH TEMP :: 
39
ENTER LOW TEMP :: 
28
ENTER THE RAIN :: 
13
ENTER THE SNOW :: 
3

1.ENTER DATA 
2.DISPLAY 
3.EXIT 
 ENTER YOUR CHOICE :: 2

	day	ltemp	htemp	rain	snow
	1	24	34	16	4
	2	28	39	13	3
AVERAGE IS ::	26	36.5	14.5	3.5

1.ENTER DATA 
2.DISPLAY 
3.EXIT 
 ENTER YOUR CHOICE :: 3
======================================================================================================*/
