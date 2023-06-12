#include "Revolver.h"

Revolver::Revolver() {
	this->Type = "Revolver";
}

Revolver::~Revolver() {

}

std::string Revolver::Shoot() {
	return "Pum!";
}

std::string Revolver::getType() {
	return this->Type;
}
