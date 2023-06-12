#include "Shootgun.h"

Shootgun::Shootgun() {
	this->Type = "Shootgun";
}

Shootgun::~Shootgun() {

}

std::string Shootgun::Shoot() {
	return "Paaaaam!";
}

std::string Shootgun::getType() {
	return this->Type;
}