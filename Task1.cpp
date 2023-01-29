#include <iostream>
using namespace std;
int main()
{
	string temperature,humidity;
	cout <<"Enter the temperature of the given day: ";
	cin >>temperature;
	cout <<"Enter humidity: ";
	cin >>humidity;
	if (temperature == "warm" && humidity=="dry")
	{
		cout <<"You can play tennis: ";
		
	}
	if (temperature == "warm" && humidity=="humid")
	{
		cout <<"you can swim: ";
		
	}
	if (temperature == "cold" && humidity=="dry")
	{
		cout <<"You can play basketball: ";
		
	}
	if (temperature == "cold" && humidity=="humid")
	{
		cout <<"YOu can watch TV: ";
		
	}
}
