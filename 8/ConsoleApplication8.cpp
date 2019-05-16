#include "stdafx.h"
#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "idCard.h"

using namespace std;

void Department::setName(std::string newName)
{
	name = newName;
}

std::string Department::getName()
{
	return this->name;
}

void Department::setHead(Employee* newHead)
{
	head = newHead;
}

void Employee::setName(std::string newName)
{
	name = newName;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setPosition(std::string newPosition)
{
	position = newPosition;
}
std::string Employee::getPositon()
{
	return this-> position;
}
void Employee::setIdCard(idCard* newIdCard)
{
	card = newIdCard;
}
idCard* Employee::getIdCard()
{
	return this->card;
}
void Employee::setRoom(int newRoom)
{
	room = newRoom;
}
int Employee::getRoom()
{
	return this->room;
}
void Employee::setDepartment(Department *newDepartment)
{
	department = newDepartment;
}
Department* Employee::getDepartment()
{
	return this->department;
}
void Employee::print()
{
	cout << "name: " << name << endl << "position: " << position << endl << "room: " << room << endl << "idCard: " << this->card->getNumber() << endl <<"department: " << this->department->getName() << endl << endl;
}

void idCard::setNumber(int newNumber)
{
	number = newNumber;
}
int idCard::getNumber()
{
	return this-> number;
}
void idCard::setDateExpire(std::string newDateExpire)
{
	dateExpire= newDateExpire;
}
std::string idCard::getDateExpire()
{
	return this->dateExpire;
}



void main()
{


	Department dAdm;
	Department dDev;

	Employee headdep; 
	Employee maindev;
	Employee dev; 
	Employee director;
	Employee subDirector;
	Employee mainAccountant;

	idCard headdep101;
	idCard maindev5016;
	idCard devId5018;
	idCard director201;
	idCard subDirector201;
	idCard mainAccountant202;

	dAdm.setName("Administration");
	dDev.setName("Developers");

	headdep.setNumber(101);
	maindev.setNumber(5016);
	devId.setNumber(5018);
	director.setNumber(201);
	subDirector.setNumber(5022);
	mainAccountant.setNumber(5019);

	//Ivan
	headdep.setName("Ivan Ivanovich Ivanov");;
	headdep.setPosition("GlavaDepartmenta");
	headdep.setRoom(101);
	headdep.setIdCard(&headDep);
	headdep.setDepartment(&dDev);
	dDev.setHead(&headDep);

	//Petr
	maindev.setName("Petrov Petr Petrovich");;
	maindev.setPosition("GlavDeveloper");
	maindev.setRoom(102);
	maindev.setIdCard(&mainDev);
	maindev.setDepartment(&dDev);
	dDev.setHead(&mainDev);

	//Sidor
	dev.setName("Sidorov Sidor Sidorovich");
	dev.setPosition("Developer");
	dev.setRoom(102);
	dev.setIdCard(&devId);
	dev.setDepartment(&dDev);
	dDev.setHead(&dev);

	//Mikhail
	director.setName("Mikhailov Mikhail Mikhailovich");
	director.setPosition("Director");
	director.setRoom(201);
	director.setIdCard(&director);
	director.setDepartment(&dAdm);
	dAdm.setHead(&director);

	//Alexandra
	subDirector.setName("Alexandrovna Alexandra Alexandrovna");
	subDirector.setPosition("Zam director");
	subDirector.setRoom(201);
	subDirector.setIdCard(&subDirector);
	subDirector.setDepartment(&dAdm);
	dAdm.setHead(&subDirector);

	//Evgenia
	mainAccountant.setName("Evgenevna Evgenia Evgeneva");
	mainAccountant.setPosition("Glav buhgalter");
	mainAccountant.setRoom(202);
	mainAccountant.setIdCard(&mainAccountant);
	mainAccountant.setDepartment(&dAdm);
	dAdm.setHead(&mainAccountant);

	headDep.print();
	mainDev.print();
	dev.print();
	director.print();
	subDirector.print();
	mainAccountant.print();
}