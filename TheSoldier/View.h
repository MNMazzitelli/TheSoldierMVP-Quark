#pragma once
#include "IView.h"

class View : public IView
{
private:
	Presenter* presenter;
public:
	View(Presenter* presenter);
	~View();
	void showResults(std::string out);

	//Console
	void mainMenu();
	void selectionMenu();
	void clearConsole();
};

