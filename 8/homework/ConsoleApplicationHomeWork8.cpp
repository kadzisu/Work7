#include "pch.h"
#include <iostream>
#include "Money.h"
using namespace std;

unsigned char koppekSumma;
int rubleySumma;

unsigned char raznostKop;
int raznostRub;
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

unsigned char Money::getKopeek()
{
	return this->kopeek;
}

void Money::addMoney(Money& someMoney)
{
	rubleySumma = rubley + someMoney.rubley;
	koppekSumma = kopeek + someMoney.kopeek;
	if (koppekSumma >= kopeekMax) {
		koppekSumma -= kopeekMax;
		rubleySumma += 1;
	}
	cout << "+: " << rubleySumma << "," << static_cast<unsigned>(koppekSumma) << " Rub" << endl << endl;
}

void Money::withdrawMoney(Money& someMoney)
{
	raznostRub = rubley - someMoney.rubley;
	raznostKop = kopeek - someMoney.kopeek;

	if (raznostKop >= kopeekMax) {
		raznostKop -= 256 - kopeekMax;
		raznostRub -= 1;
	}
	cout<<"-: "<<raznostRub<< ","<<static_cast<unsigned>(raznostKop)<<" Rub"<< endl;
}

int main()
{
	Money money1;
	Money money2;

	money1.set(90, 50);
	money2.set(43, 40);

	money1.addMoney(money2);
	money1.withdrawMoney(money2);
}