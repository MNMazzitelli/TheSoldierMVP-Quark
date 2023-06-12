#include "Soldier.h"

Soldier::Soldier() {
	this->_weapon = NULL;
}

Soldier::~Soldier() {

}

void Soldier::PickUp(IWeapon* weapon) {
	this->_weapon = weapon;
}

void Soldier::Leave() {
	this->_weapon = NULL;
}

std::string Soldier::Shoot() {
	return this->_weapon->Shoot();
}

bool Soldier::HasWeapon() {
	if (!this->_weapon == NULL) {
		return true;
	}
	else
		return false;
}

std::string Soldier::SeeWeapon() {
	return this->_weapon->getType();
}
