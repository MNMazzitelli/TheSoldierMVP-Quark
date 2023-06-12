#pragma once
#include "Soldier.h"

class Presenter
{
private:
	Soldier* soldier;
	IWeapon* revolver;
	IWeapon* rifle;
	IWeapon* shootgun;
public:
	Presenter(Soldier* soldier, IWeapon* revolver, IWeapon* rifle, IWeapon* shootgun);
	~Presenter();
	std::string action(char action);
	std::string option(char option);
};

