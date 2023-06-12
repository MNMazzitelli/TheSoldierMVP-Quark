#include <iostream>

#include "View.h"
#include "Presenter.h"
#include "Soldier.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Shootgun.h"

int main() {
	Soldier* soldier = new Soldier();
	IWeapon* revolver = new Revolver();
	IWeapon* rifle = new Rifle();
	IWeapon* shootgun = new Shootgun();

	Presenter* presenter = new Presenter(soldier, revolver, rifle, shootgun);
	View* view = new View(presenter);

	view->mainMenu();

	return 0;
}