#pragma once
#include "pch.h"
#include <iostream>
#include <string>
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
	param.hours = this->hours + plusTime.hours;
	param.minutes = this->minutes + plusTime.minutes;
	if (param.minutes >= maxminute) {
		param.hours++;
		param.minutes -= maxminute;
	}
	return param;
}
Time Time::operator-(Time & minusTime)
{
	Time param;
	param.hours = this->hours - minusTime.hours;
	param.minutes = this->minutes - minusTime.minutes;
	if (param.minutes <= 0) {
		param.hours--;
		param.minutes += maxminute;
	}
	return param;
}
Time Time::operator*(int multTimes)
{
	Time param;
	unsigned char param2;

	param.hours = this->hours * multTimes;
	param.minutes = this->minutes * multTimes;

	param2 = param.minutes / maxminute;
	param.hours += (int)param2;

	while (param.minutes >= maxminute)
		param.minutes -= maxminute;

	return param;
}

bool Time::operator<(Time & minusTimes)
{
	if (this->hours < minusTimes.hours) {
		return 1;
	}
	else if (this->hours == minusTimes.hours) {
		if (this->minutes < minusTimes.minutes) {
			return 1;
		}
		else if (this->minutes == minusTimes.minutes) {
			return 0;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}
bool Time::operator>(Time & minusTimes)
{
	if (this->hours > minusTimes.hours) {
		return 1;
	}
	else if (this->hours == minusTimes.hours) {
		if (this->minutes > minusTimes.minutes) {
			return 1;
		}
		else if (this->minutes == minusTimes.minutes) {
			return 0;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}

bool Time::operator<=(Time & minusTimes)
{
	if (this->hours <= minusTimes.hours) {
		if (this->hours == minusTimes.hours) {
			if (this->minutes <= minusTimes.minutes) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 1;
		}
	}
	else {
		return 0;

	}
}
bool Time::operator>=(Time & minusTimes)
{
	if (this->hours >= minusTimes.hours) {
		if (this->hours == minusTimes.hours) {
			if (this->minutes >= minusTimes.minutes) {
				return 1;
			}
			else{
				return 0;
			}
		}
		else {
			return 1;
		}
	}
	else {
		return 0;
	}
}
bool Time::operator==(Time & minusTimes)
{
	if (this->hours == minusTimes.hours && this->minutes == minusTimes.minutes) {
		return 1;

	}
	else {
		return 0;

	}
}
bool Time::operator!=(Time & minusTimes)
{
	if (this->hours != minusTimes.hours || this->minutes != minusTimes.minutes) {
		return 1;

	}
	else {
		return 0;

	}
}

void Time::Result()
{
	cout << this->hours << " hours " << this->minutes << " minuts" << endl;
}

void Time::Result2(Time param1, Time param2, std::string param3)
{
	cout << endl;
	param1.Result();
	cout << " "<< param3 << " ";
	param2.Result();
}

void main()
{
	Time a;
	Time b;
	Time plus;
	Time minus;
	Time umnoj;
	Time sravnenie;

	Time arrA[10];

	int chisloUmnoj = 7;

	a.setTime(10, 42);
	b.setTime(4, 30);

	plus=a+b;
	minus=a-b;
	umnoj =a*valueMult;

	plus.Result();
	minus.Result();
	umnoj.Result();

	if (a < b)
		sravnenie.Result2(a, b, "<");

	if (a > b)
		sravnenie.Result2(a, b, ">");

	if (a <= b)
		sravnenie.Result2(a, b, "<=");

	if (a >= b)
		sravnenie.Result2(a, b, ">=");

	if (a == b)
		sravnenie.Result2(a, b, "==");

	if (a != b)
		sravnenie.Result2(a, b, "!=");

	for (int i = 0; i < 10; i++)
	{
		arrA[i].setTime(rand() % 23 +1 ,rand() % 59 +0);
		arrB[i].setTime(rand() % 23 +1,rand() % 59 +0);
	}

	Time temp;
	Time temp2;
	
	//Metod puzirka
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arrA[j] > arrA[j + 1]) {
                temp = arrA[j];
                arrA[j] = arrA[j + 1];
                arrA[j + 1] = temp;
            }
        }
    }

	for (int i = 0; i < 10; i++)
	{
		arrA[i].Result();
	}
}