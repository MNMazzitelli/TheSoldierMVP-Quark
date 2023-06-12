#include "Rifle.h"

Rifle::Rifle() {
	this->Type = "Rifle";
}

Rifle::~Rifle() {

}

std::string Rifle::Shoot() {
	return "Pum! Pum! Pum!";
}

std::string Rifle::getType() {
	return this->Type;
}