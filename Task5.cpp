#include <iostream>
using namespace std;
float price(string fruit,string day,int quan);
int main()
{
	string fruit,day;
	int quan;
	float result;
	cout <<"Enter the fruit name: ";
	cin >>fruit;
	cout <<"Enter day: ";
	cin >>day;
	cout <<"Enter qunatity you want to buy: ";
	cin >>quan;
	result = price(fruit,day,quan);
	cout <<result;
}

float price(string fruit,string day,int quan)
{
	float result;
	if (day =="Saturday" || day=="Sunday")
	{
	  if (fruit=="Banana")
	  {
	  	result =quan*2.70;
	  }
	  if (fruit == "Apple") 
	  {
	  	result =quan*1.25;
	  }
       if (fruit == "Orange") 
	  {
	  	result =quan*0.90;
	  }
	   if (fruit == "grapefruit") 
	  {
	  	result =quan*1.60;
	  }
	   if (fruit == "kiwi") 
	  {
	  	result =quan*3.00;
	  }
	   if (fruit == "pineapple") 
	  {
	  	result =quan*5.60;
	  }
	   if (fruit == "grapes") 
	  {
	  	result =quan*4.20;
	  }
	  
}

  	if (day !="Saturday" && day!="Sunday")
	{
	  if (fruit=="Banana")
	  {
	  	result =quan*2.50;
	  }
	  if (fruit == "Apple") 
	  {
	  	result =quan*1.20;
	  }
       if (fruit == "Orange") 
	  {
	  	result =quan*0.85;
	  }
	   if (fruit == "grapefruit") 
	  {
	  	result =quan*1.45;
	  }
	   if (fruit == "kiwi") 
	  {
	  	result =quan*2.70;
	  }
	   if (fruit == "pineapple") 
	  {
	  	result =quan*5.50;
	  }
	   if (fruit == "grapes") 
	  {
	  	result =quan*3.85;
	  }
	  
}
  return result;

}
