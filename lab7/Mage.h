#pragma once
#include <string>;
#include "Spell.h"
class Mage
{
private:
std::string name;
int hp;
int mp;


public:
	void init(int newhp, int newmp, std::string name);
	std::string getname();
	void say(std::string text);
	int cast(Spell & spl, Mage & target);
	void hit(Spell & spl);
};

