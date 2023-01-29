 #include <iostream>
using namespace std;
float bill(string person,char time,int minutes);
int main ()
{
	string person;
	char time;
	int minutes;
	float billamount;
	cout <<"Enter which type of person you are Residential or Premium: ";
	cin >>person;
	
	
    
	cout <<"Enter the number of mins you used the service: ";
	cin >>minutes;
	billamount = bill(person,time,minutes);
	cout <<billamount;
	
}
float bill(string person,char time,int minutes)
{
	float billamount;
	float amount;
	int minute;
	int a;
	
	if (person=="Residential")
	{
		
		if (minutes < 50)
		{
			billamount = 10; 
		}
		if (minutes > 50)
		{
			minute=50;
			a = minute-minutes;
			amount = a*0.20;
			billamount = 10+amount;
		}
		
	}
	if (person == "Premium")
	{
		
	cout <<"Press D for day time or press N for night time: ";
	cin >>time;
	
		if (time =='D')
		{
			if (minutes < 75)
			{
				billamount = 25;
			}
			if (minutes > 75)
			{
				amount = 0.10*minutes;
				billamount = amount + 25;
			}
		}
		if (time == 'N')
		{
			if (minutes < 100)
			{
				billamount = 25;
			}
			if (minutes > 100)
			{
				amount = 0.05*minutes;
				billamount = amount + 25;
			}
		}
	}
	return billamount;
}


