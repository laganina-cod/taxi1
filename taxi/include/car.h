#pragma once
#include <iostream>
#include<string>
#include"driver.h"
#include"engine.h"
class Car {
protected:
	Driver surname;
	Engine number;
	std::string color;
	std::string mark;
	bool status;
public:
	void status_check();
	void in_autopark();
	void on_way();
	//Car();

};