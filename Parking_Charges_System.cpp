#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string customer_name;
	int customer_ID;
	int i;
	int hours;
	double parking_charges;
	int hrs;
	int add_hrs;
	
	
	for(i=0;i<3;i++)
	{
	cout<<"Enter your name : ";	
	cin>>customer_name;
	cout<<"Enter your Identification card number : ";
	cin>>customer_ID;
	
	cout<<"Enter the number of hours you've parked your car : "<<endl;
	cin>>hours;
	  if(hours<=3)
	   {
	   	parking_charges=2.00;
	   	cout<<"The amount you are supposed to pay is"<<setw(10)<<parking_charges<<endl;
	   	
	   }
	
	  else
	      {
	  	     	add_hrs=hrs-3;
	        	parking_charges =2+(0.50*add_hrs);
			   
	  	     cout<<"The amount you are supposed is"<<setw(10)<<parking_charges<<endl;
	      }
	}
	
	
	return 0;
	
}
