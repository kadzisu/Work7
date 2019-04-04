
#include "stdafx.h"
#include "iostream"
#include "Mage.h"
#include "Spell.h"

using namespace std;



void Mage::init (int newhp, int newmp, std::string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}


string Mage::getname()
{
	return this -> name;
}

void Mage::say (std::string text)
{
	cout << this->name << " says " << text <<endl <<endl;
}


int Mage::cast(Spell & spl, Mage & target)
{
	if (hp>0)
	{
		cout <<this->name << " hit  " << spl.name << " our" <<target.getname() <<endl; 
		target.hit (spl);
		return 0;
	}

	else say
}

void Mage::hit (Spell & spl)
{
hp=hp-spl.dhp;
mp=mp-spl.dmp;

}

void Main()
{
	Mage vanya;
	Mage boris;
	Spell bolt;
	Spell drain;

	bolt.dmp = 30;
	bolt.dhp = 70;
	bolt.name = " bolt ";

	drain.name = " drain ";
	drain.dhp = 40;
	drain.dmp = 10;

	vanya.init(100,100, " Ivan ");
	vanya.say(" privet ");

	boris.init(90,80, "Borya");
	boris.say(" auch ");

	vanya.cast(bolt, boris);





}




