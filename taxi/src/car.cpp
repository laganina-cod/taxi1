#include"car.h"
#include<iostream>
void Car::status_check() {
	if (status == 1) {
		std::cout << "In autopark" << "\n";
	}
	else {
		std::cout<<"On way" << "\n";
	}
}
void Car::in_autopark() {
	status = 1;
}

void Car::on_way() {
	status = 0;
}
