#include "View.h"

View::View(Presenter* presenter) {
	this->presenter = presenter;
}

View::~View() {

}

void View::mainMenu() {
	char action;
	std::string out;

	clearConsole();
	std::cout << "-== Welcome to the training field, private ==- \n" << std::endl;
	std::cout << "Are you ready to start your training?" << std::endl;
	std::cout << "--- PRESS TO CHOOSE AN OPTION --- \n" << std::endl;
	std::cout << "1 - Pick up a weapon" << std::endl;
	std::cout << "2 - Leave the current weapon" << std::endl;
	std::cout << "3 - Shoot" << std::endl;
	std::cout << "4 - See the current weapon" << std::endl;
	std::cout << "X - Exit game \n\n" << std::endl;

	std::cin >> action;

	clearConsole();

	if (action != '1' && action != '2' && action != '3' && action != '4' && action != 'x' && action != 'X') {
		std::cout << "Something's Wrong... try again!" << std::endl;
		_getch();

		mainMenu();
	}
	else {
		if (action == '1') {
			//Weapon selection menu
			clearConsole();
			selectionMenu();
		}
		else if (action == 'x' || action == 'X') {
			std::cout << "\tThanks for playing... see you later Soldier!\n\n" << std::endl;
			std::cout << "\t\t              ....            " << std::endl;
			std::cout << "\t\t           .-======-:         " << std::endl;
			std::cout << "\t\t           +=====+==+-        " << std::endl;
			std::cout << "\t\t           :====**-===        " << std::endl;
			std::cout << "\t\t           .=--=-+++.       " << std::endl;
			std::cout << "\t\t            :===+*####-       " << std::endl;
			std::cout << "\t\t     :=::..:++=-=*=-==        " << std::endl;
			std::cout << "\t\t    +*+=--:==--+*#+--       " << std::endl;
			std::cout << "\t\t            -+=-=*###+=+:     " << std::endl;
			std::cout << "\t\t            -+++++-+=.:+-     " << std::endl;
			std::cout << "\t\t          .:-==+*:            " << std::endl;
			std::cout << "\t\t    *#- :+=-+-+==-            " << std::endl;
			std::cout << "\t\t    -%###*=-  .==-            " << std::endl;
			std::cout << "\t\t     =%:      -#            " << std::endl;
			std::cout << "\t\t      .     .=+###:           " << std::endl;
			std::cout << "\t\t            .--:.             " << std::endl;
			std::cout << "\n\n\tTHE SOLDIER (GAME) by MATT/DEV for QUARK ACADEMY\n" << std::endl;
		}
		else {
			out = this->presenter->action(action);
			showResults(out);
		}
	}
}

void View::selectionMenu() {
	char option;
	std::string out;

	std::cout << "Private! choose a weapon to use: \n" << std::endl;
	std::cout << "1 - Revolver" << std::endl;
	std::cout << "2 - Rifle" << std::endl;
	std::cout << "3 - Shootgun" << std::endl;
	std::cout << "4 - Go back to the main menu \n\n" << std::endl;

	std::cin >> option;

	clearConsole();

	if (option != '1' && option != '2' && option != '3' && option != '4') {
		std::cout << "Something's Wrong... try again!" << std::endl;
		_getch();

		clearConsole();
		selectionMenu();
	}
	else if (option == '4') {
		mainMenu();
	}
	else {
		out = this->presenter->option(option);
		showResults(out);
	}
}

void View::showResults(std::string out) {
	std::cout << out << std::endl;
	_getch();
	clearConsole();
	mainMenu();
}

void View::clearConsole() {
	system("cls");
}