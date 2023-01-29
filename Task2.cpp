#include <iostream>
using namespace std;
int main()
{
	int sub1,sub2,sub3,sub4,sub5,totalmarks;
	string name;
	float percent,percentage,obtained;
	cout <<"ENter your name: ";
	cin >>name;
	cout <<"Enter Subject 1 marks: ";
	cin >>sub1;
	cout <<"Enter subject 2 marks: ";
	cin >>sub2;
	cout <<"Enter subject 3 marks: ";
	cin >>sub3;
	cout <<"Enter subject 4 marks: ";
	cin >>sub4;
	cout <<"Enter subject 5 marks: ";
	cin >>sub5;
	totalmarks = 500;
	obtained  = sub1+sub2+sub3+sub4+sub5;
	percent = obtained/totalmarks;
	percentage = percent *100;
	cout <<"Your percentage is "<< percentage;
	if (percentage >=90 && percentage<=100)
	{
		cout <<" your grade is A";
		
	}
	if (percentage >=80 && percentage<=90)
	{
		cout <<"your grade is B";
		
	}
	if (percentage >=70 && percentage<=80)
	{
		cout <<"your grade is C";
		
	}
	if (percentage >=60 && percentage==70)
	{
		cout <<"your grade is D";
		
	}
	if (percentage >=50 && percentage==60)
	{
		cout <<"your grade is E";
		
	}
	else if(percentage<50)
    {
	
		cout <<"you are fail: ";
}
	return 0;
	
	
}
