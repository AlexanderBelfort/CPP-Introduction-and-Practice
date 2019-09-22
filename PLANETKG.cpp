// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {

	double weight;

	int planet;

	std::cout << "Your weight on EARTH: ";
	std::cin >> weight;

	std::cout << "Choose a planet you want to fight on: ";
	std::cout << "1.Venus	2.Mars	3.Jupiter\n";
	std::cout << "4.Saturn	5.Uranus	6.Neptune\n";

	std::cout << "Which planet are you boxing in?";
	std::cin >> planet;

	if (planet == 1) {

		weight = weight * 0.78;
	}

	else if (planet == 2) {

		weight = weight * 0.39;
	}

	else if (planet == 3) {

		weight = weight * 2.65;
	}


	else if (planet == 4) {

		weight = weight * 1.17;
	}


	else if (planet == 5) {

		weight = weight * 1.05;
	}


	else if (planet == 6) {

		weight = weight * 1.23;
	}

	std::cout << "Your weight will be: " << weight;

}