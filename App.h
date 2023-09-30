#pragma once
#include "Number.h"
#include "Matrix.h"
#include <Windows.h>

class App
{
private:
	number* getArrayValues(Uint);
	int menu();
public:
	App();
	int exec();
};