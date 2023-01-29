#include <iostream>
using namespace std;
float price(string month,int stays);
int main()
{
	string month;
	int stays;
	float result;
	cout <<"Enter month: ";
	cin >>month;
	cout <<"Enter the number of stays: ";
	cin >>stays;
	result = price(month,stays);
	cout <<result;
}
float price(string month,int stays)
{
   int studio,amounts,amounta;
   float studiop,studiod,mult,amountd;
   float studiofp,apartment,apartmentp,discounts,finalamounts;
   float result=0;
	if (month=="May"|| month=="October")
	{
		if(stays < 7)
		{
		
		amounts =stays*50;
		cout <<"amount of total stays in studio is "<<amounts;
	}
	 if(stays <14)
	 {
	 
		amounta = stays*65;
	
		cout <<"amount of total stays in apartment is "<<amounta <<endl;
	}
	else if (stays >14)
		{
			amounta =stays*65;
			mult =amounta*0.1;
			amountd = amounta-mult;
			cout <<"apartment is :"<<amountd<<endl;
			amounts =stays*50;
			discounts = amounts*0.3;
			finalamounts = amounts-discounts;
			cout <<"Amount of total stays in studio in case of more than 14 stays is: "<<finalamounts<< "$"<<endl;
		}
		
	  if (stays > 7 && stays<14)
	  {
	  		amounts =stays*50;
			discounts = amounts*0.05;
			finalamounts = amounts-discounts;
			cout <<"Amount of total stays in studio in case of more than 14 stays is: "<<finalamounts;
	  }
	 
	   
	}


	if (month=="june"|| month=="september")
	{
	
	if (stays>14)
	{
		studio = stays*75.20;
		studiop = studio*0.2;
		studiofp=studio-studiop;   
		cout <<"Amount of studio in case of more than 14 stays is: "<<studiofp<<endl;
		apartment = stays*68.70;
		apartmentp = apartment*0.1;
		result = apartment-apartmentp;
		cout <<"Amount of apartment in case of more than 14 stays is : "<<result<<endl;
	}
	else if (stays < 7 || stays <= 14)
	{
		result = stays*75.20;
		cout <<"The stays is less than 14 so you dont get any discount your bill is: "<<result<<endl;
		result = stays*68.70;
		cout <<"The stays is less than 14 so you dont get any discount your bill is: "<<result<<endl;
	}
	
}
	
	if (month=="july"|| month=="august")
	{
	
	if (stays>14)
	{
		studio = stays*76;
		cout <<"YOur bill for stays in july and august is : "<<studio<<endl;
		apartment = stays*77;
		apartmentp = apartment*0.1;
		result = apartment-apartmentp;
		cout <<"The stays is less than 14 so you dont get any discount your bill is: "<<result<<endl;
	}
	
}
 return result;

}

