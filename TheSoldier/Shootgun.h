#pragma once
#include "IWeapon.h"

class Shootgun : public IWeapon
{
	std::string Type;
public:
	Shootgun();
	~Shootgun();
	std::string Shoot();
	std::string getType();
};

