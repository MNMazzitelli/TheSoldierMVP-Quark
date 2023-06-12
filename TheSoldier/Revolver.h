#pragma once
#include "IWeapon.h"

class Revolver : public IWeapon
{
	std::string Type;
public:
	Revolver();
	~Revolver();
	std::string Shoot();
	std::string getType();
};
