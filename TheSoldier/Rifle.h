#pragma once
#include "IWeapon.h"

class Rifle : public IWeapon
{
	std::string Type;
public:
	Rifle();
	~Rifle();
	std::string Shoot();
	std::string getType();
};

