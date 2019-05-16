
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
		cout <<this->name << " hit with  " << spl.name << " our " <<target.getname() <<endl <<endl; 
		target.hit (spl);
	}

	else 
{
	this->say("Umer");	
} 
return 0;
	
void Mage::hit (Spell & spl)
{
	this->hp -=spl.dhp;
	this->mp -=spl.dmp;
	if (hp <= 0)
	{
		this->say(" Ya proigral");
	}
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

	boris.init(90,80, "Boris");
	boris.say(" auch ");

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);

	vanya.cast(bolt, Boris);
	boris.cast(drain, Ivan);


}




