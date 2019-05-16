#include "pch.h"
#include <iostream>
#include "Money.h"

using namespace std;

int kopeekMax = 100;

void Money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
}

int Money::getRubley()
{
	return this->rubley;
}

int Money::getKopeek() {
	return this->kopeek;
}

Money Money::operator+(Money &plusCash)
{
	Money param;
	param.rubley = this->rubley + plusCash.rubley;
	param.kopeek = this->kopeek + plusCash.kopeek;
	if (param.kopeek >= kopeekMax) {
		param.rubley++;
		param.kopeek -= kopeekMax;
	}
	return param;
}

Money Money::operator-(Money & minusCash)
{
	Money param;
	param.rubley = this->rubley - minusCash.rubley;
	param.kopeek = this->kopeek - minusCash.kopeek;
	if (param.kopeek <= 0) {
		param.rubley--;
		param.kopeek += kopeekMax;
	}
	return param;
}

Money Money::operator*(int multCash)
{
	Money param;
	unsigned char param2;

	param.rubley = this->rubley * multCash;
	param.kopeek = this->kopeek * multCash;

	param2 = result.kopeek / kopeekMax;
	param.rubley += (int)param2;

	while (param.kopeek >= kopeekMax)
		param.kopeek -= kopeekMax;

	return param;
}

void Money::Result()
{
	cout << this->rubley <<" rubley "<< this->kopeek <<" kopeek" << endl;
}

int main()
{
	Money money1;
	Money money2;
	Money plusmoney;
	Money minusmoney;
	Money multmoney;

	int chisloUmnoj = 2;

	money1.set(74, 35);
	money2.set(42, 70);

	plusmoney = money1 + money2;
	minusmoney = money1 - money2;
	multmoney = money1 * chisloUmnoj;




	plusmoney.Result();
	minusmoney.Result();
	multmoney.Result();
}