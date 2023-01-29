#include <iostream>
using namespace std;
string signs(int day,string month);
int main()
{
	int day;
	string month,zodiacsign;
	cout <<"ENter Day to check your zodiac sign: ";
	cin >>day;
	cout <<"Enter your date of birth month: ";
	cin >>month;
	zodiacsign=signs(day,month);
	cout <<"People born in this day have "<<zodiacsign<<" sign";
}
string signs(int day,string month)
{
	string zodiacsign;
	if (((day>=21 && day<=31) && month=="March") || ((day>=1 && day<=19) && month=="April"))
	{
		zodiacsign="Aries";
	}
	if (((day>=20 && day<=31) && month=="April") || ((day>=1 && day<=20) && month=="May"))
	{
		zodiacsign="Taurus";
	}
	if (((day>=21&& day<=31) && month=="May") || ((day>=1 && day<=20) && month=="June"))
	{
		zodiacsign="The Gemini";
	}
	if (((day>=21&& day<=31) && month=="June") || ((day>=1 && day<=22) && month=="July") )
	{
		zodiacsign="Cancer";
	}
	if (((day>=23&& day<=31) && month=="July") || ((day>=1 && day<=22) && month=="August") )
	{
		zodiacsign="Leo";
	}
	if (((day>=23&& day<=31) && month=="August") || ((day>=1 && day<=22) && month=="September"))
	{
		zodiacsign="Virgo";
	}
	if (((day>=23 && day<=31) && month=="September") || ((day>=1 && day<=22) && month=="October"))
	{
		zodiacsign="Libra";
	}
	if (((day>=23 && day<=31) && month=="October") || ((day>=1 && day<=21) && month=="November"))
	{
		zodiacsign="Scorpio";
	}
	if (((day>=22 && day<=31)&& month=="November") || ((day>=1 && day<=21) && month=="December"))
	{
		zodiacsign="Sagittarius";
	}
	if (((day>=22&& day<=31) && month=="December") || ((day>=1 && day<=19) && month=="January"))
	{
		zodiacsign="Capricon";
	}
	if (((day>=20&& day<=31) && month=="January") || ((day>=1 && day<=18) && month=="Febuary"))
	{
		zodiacsign="Aquarius";
		
	}
	if (((day>=19 && day<=31)&& month=="Febuary")||((day>=1 && day<=20) && month=="March") )
	{
		zodiacsign="Pisces";
	}
	return zodiacsign;
	
}         
