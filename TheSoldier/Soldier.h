#pragma once
#include <string>
#include "IWeapon.h"

class Soldier
{
	IWeapon* _weapon;
public:
	Soldier();
	~Soldier();
	std::string Shoot();
	void PickUp(IWeapon* weapon);
	void Leave();
	bool HasWeapon();
	std::string SeeWeapon();
};

