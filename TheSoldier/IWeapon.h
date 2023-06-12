#pragma once
#include <string>

class IWeapon {
private:
	std::string Type;
public:
	virtual std::string Shoot() = 0;
	virtual std::string getType() = 0;
};