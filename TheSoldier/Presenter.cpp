#include "Presenter.h"

Presenter::Presenter(Soldier* soldier, IWeapon* revolver, IWeapon* rifle, IWeapon* shootgun) {
	this->soldier = soldier;
	this->revolver = revolver;
	this->rifle = rifle;
	this->shootgun = shootgun;
}

Presenter::~Presenter() {

}

std::string Presenter::action(char action) {
	std::string out;

	switch (action)
	{
	case '2':
		//Leave weapon
		if (this->soldier->HasWeapon()) {
			this->soldier->Leave();
			out = "The private leaves his weapon on the ground...";
			return out;
		}
		else {
			out = "There's nothing to leave...";
			return out;
		}
		break;
	case '3':
		//Shoot
		if (this->soldier->HasWeapon()) {
			return this->soldier->Shoot();
		}
		else {
			out = "The private raise his hands to take a shoot... but empty hands piss off the Sargent...";
			return out;
		}
		break;
	case '4':
		//See weapon
		if (this->soldier->HasWeapon()) {
			out = "The private has a " + this->soldier->SeeWeapon() + " on his hands";
			return out;
		}
		else {
			out = "I have some dirty on my hands... but nothing else...";
			return out;
		}
		break;
	default:
		out = " ";
		return out;
		break;
	}
}

std::string Presenter::option(char option) {
	std::string out;

	switch (option)
	{
	case '1':
		//Pick up a Revolver
		if (!this->soldier->HasWeapon()) {
			this->soldier->PickUp(this->revolver);
			out = "The private pick up a " + this->soldier->SeeWeapon();
			return out;
		}
		else {
			out = "It looks like the private's hands are busy...";
			return out;
		}
		break;
	case '2':
		//Pick up a Rifle
		if (!this->soldier->HasWeapon()) {
			this->soldier->PickUp(this->rifle);
			out = "The private pick up a " + this->soldier->SeeWeapon();
			return out;
		}
		else {
			out = "It looks like the private's hands are busy...";
			return out;
		}
		break;
	case '3':
		//Pick up a Shootgun
		if (!this->soldier->HasWeapon()) {
			this->soldier->PickUp(this->shootgun);
			out = "The private pick up a " + this->soldier->SeeWeapon();
			return out;
		}
		else {
			out = "It looks like the private's hands are busy...";
			return out;
		}
		break;
	default:
		out = " ";
		return out;
		break;
	}
}
