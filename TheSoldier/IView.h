#pragma once
#include <iostream>
#include <string>
#include <conio.h>

#include "Presenter.h"

class IView {
public:
	virtual void showResults(std::string out) = 0;
};