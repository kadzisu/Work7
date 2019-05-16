#include "pch.h"
#include <iostream>
#include <string>
#include "reader.h"
#include "book.h"

using namespace std;

book lord_of_the_rings;
book war_and_peace;
book harry_potter;

reader Vanya;
reader Kolya;
reader Natasha;

void book::set_name(const char * new_name)
{
	this->name = new_name;
}
void book::set_year(const int new_year)
{
	this -> year = new_year;
}

void book::get_name() {
	cout << ", " << this -> name << endl;
}

void reader::set_fio(const char * new_fio)
{
	this -> fio = new_fio;
}

void reader::set_age(const int new_age)
{
	this -> age = new_age;
}

void reader::set_current_book(const book new_current_book)
{
	this -> current_book = new_current_book;
}

void reader::get_info()
{
	cout << fio;
	current_book.get_name();
}

void main()
{
	war_and_peace.set_name("War And Peace");
	lord_of_the_rings.set_name("Lord Of The Rings");
	harry_potter.set_name("Harry Potter And The Philosophers Stone");
	Vanya.set_fio("Ivan");
	Kolya.set_fio("Nikolai");
	Natasha.set_fio("Natasha");

	Vanya.set_current_book(war_and_peace);
	Kolya.set_current_book(lord_of_the_rings);
	Natasha.set_current_book(harry_potter);
	Vanya.get_info();
	Kolya.get_info();
	Natasha.get_info();
}