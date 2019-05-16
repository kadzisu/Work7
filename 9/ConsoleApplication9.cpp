#pragma once
#include "stdafx.h"
#include <iostream>
#include "Time.h"

using namespace std;

int maxminute = 60;
void Time::setTime(long newHours, unsigned char newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}
long Time::getHours()
{
	return this->hours;
}
long Time::getMinutes()
{
	return this->minutes;
}
Time Time::operator+(Time &plusTime)
{
	Time param;
	param.hours=this->hours+plusTime.hours;
	param.minutes=this->minutes+plusTime.minutes;
	if (param.minutes >= maxminute){
		param.hours++;
		param.minutes -= maxminute;
	}
	return param;
}
Time Time::operator-(Time & minusTime)
{
	Time param;
	param.hours=this->hours-minusTime.hours;
	param.minutes=this->minutes-minusTime.minutes;
	if (param.minutes <= 0){
		param.hours--;
		param.minutes += maxminute;
	}
	return param;
}
Time Time::operator*(int multTimes)
{
	Time param;
	unsigned char param2;

	param.hours=this->hours * multTimes;
	param.minutes=this->minutes * multTimes;

	param2 = param.minutes / maxminute;
	param.hours += (int)param2;

	while(param.minutes >= maxminute)
		param.minutes -= maxminute;

	return param;
}

void Time::Result()
{
	cout << this->hours <<" hours "<< this->minutes <<" minuts" << endl; 
}

int main()
{
	Time a;
	Time b;
	Time plus;
	Time minus;
	Time umnoj;

	int chisloUmnoj = 7;

	a.setTime(10, 42);
	b.setTime(4, 30);

	plus=a+b;
	minus=a-b;
	umnoj =a* chisloUmnoj;

	plus.Result();
	minus.Result();
	umnoj.Result();

}
