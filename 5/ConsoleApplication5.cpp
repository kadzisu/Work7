#include "pch.h"
#include <iostream>
#include "fract.h"

using namespace std;

Fractions::Fractions() :
	chislitel(0), znaminatel(0)
{}

Fractions::Fractions(int _chisl, int _znamen) :
	chislitel(_chisl), znaminatel(_znamen)
{}

Fractions::Fractions(const Fractions& rhs)
{
	this->chislitel = rhs.chislitel;
	this->znaminatel = rhs.znaminatel;
}

void Fractions::SetFraction()
{
	cout << "Vvedite chislitel- ";
		cin >> numerator;
	cout << "Vvedite znamenatel- ";
		cin >> denominator;
}

Fractions Fractions::operator+(const Fractions& rhs)
{
	Fractions result;
	result.chislitel = this->chislitel + rhs.chislitel;
	result.znaminatel = this->znaminatel + rhs.znaminatel;
	return result;
}

Fractions Fractions::operator-(const Fractions& rhs)
{
	Fractions result;
	result.chislitel = this->chislitel - rhs.chislitel;
	result.znaminatel = this->znaminatel - rhs.znaminatel;
	return result;
}

Fractions Fractions::operator*(const Fractions& rhs)
{
	Fractions result;
	result.chislitel = this->chislitel * rhs.chislitel;
	result.znaminatel = this->znaminatel * rhs.znaminatel;
	return result;
}

bool Fractions::operator==(const Fractions& rhs)
{
	return ((this->chislitel + this->znaminatel) == (rhs.chislitel + rhs.znaminatel)) ? true : false;
}

void Plus(Fractions Frac1, Fractions Frac2) {

	Fractions result = Frac1 + Frac2;
	cout << "\nplus = ";
	result.GetFraction();
}

void Minus(Fractions Frac1, Fractions Frac2) {

	Fractions result = Frac1 - Frac2;
	cout << "\nminus = ";
	result.GetFraction();
}

void Umnojenie(Fractions Frac1, Fractions Frac2) {

	Fractions result = Frac1 * Frac2;
	cout << "\numnoj = ";
	result.GetFraction();
}

void Sravnenie(Fractions Frac1, Fractions Frac2) {

	bool sravnenie = Frac1 == Frac2;
	cout << "\nsravnenie = " << sravnenie << endl;
}

int main()
{
	Fractions Frac1;
	cout << "1 \n";
	Frac1.SetFraction();

	Fractions Frac2;
	cout << "2 \n";
	Frac2.SetFraction();

	Plus(Frac1, Frac2);
	Minus(Frac1, Frac2);
	Sravnenie(Frac1, Frac2);
	Umnojenie(Frac1, Frac2);
}
