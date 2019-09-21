// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {

	double height, weight, bmi;

	//User must input height

	std::cout << "Type in your height (m): ";
	std::cin >> height;

	//User must input weight

	std::cout << "Type in your weight (kg): ";
	std::cin >> weight;

	//Our bmi formula

	bmi = weight / (height*height);

	std::cout << bmi;


	return 0;

}

//Instructions:

//$ g++ bmi.cpp bmi -o
//$ ./bmi
