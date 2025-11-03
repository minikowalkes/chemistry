// hehehehehe i lied its C++
#include "chemType.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

chemType::chemType() {
	chemicalName = "";
	chemicalSymbol = "";
	atomicNumber = 0;
	atomicMass = 0.0;
}

chemType::chemType(string name) {
	if (name.length() > 2) {
		chemicalName = name;
		chemicalSymbol = "";
	}
	else {
		chemicalName = "";
		chemicalSymbol = name;
	}
	atomicNumber = 0;
	atomicMass = 0.0;
}

chemType::chemType(string name, string sym) {
	chemicalName = name;
	chemicalSymbol = sym;
	atomicNumber = 0;
	atomicMass = 0.0;
}

chemType::chemType(string name, string sym, int atomNo) {
	chemicalName = name;
	chemicalSymbol = sym;
	if (atomNo <= 118) {
		atomicNumber = atomNo;
	}
	else {
		cout << "Invalid atomic number. Defaulting to 0." << endl;
		cout << "Reinstantiate object of class chemType" << endl;
		atomicNumber = 0;
	}
}
// we just assume atomic mass is set properly
chemType::chemType(string name, string sym, int atomNo, double atomMass) {
	chemicalName = name;
	chemicalSymbol = sym;
	if (atomNo <= 118) {
		atomicNumber = atomNo;
	}
	else {
		cout << "Invalid atomic number. Defaulting to 0." << endl;
		cout << "Reinstantiate object of class chemType" << endl;
		atomicNumber = 0;
	}
	atomicMass = atomMass;
}

void chemType::setChemicalName(string name) {
	chemicalName = name;
}

void chemType::setChemicalSymbol(string sym) {
	chemicalSymbol = sym;
}

// lol
void chemType::setAtomicNumber(int aN) {
	atomicNumber = aN;
}

void chemType::setAtomicMass(double aM) {
	atomicMass = aM;
}

string chemType::getChemicalName() const {
	return chemicalName;
}

string chemType::getChemicalSymbol() const {
	return chemicalSymbol;
}

int chemType::getAtomicNumber() const {
	return atomicNumber;
}

double chemType::getAtomicMass() const {
	return atomicMass;
}

// todo - better formatting with iomanip
void chemType::printChemType() const {
	cout << "Chemical Info" << endl;
	cout << endl;
	cout << "Element\t" << chemicalName << endl;
	cout << "Symbol\t" << chemicalSymbol << endl;
	cout << "Atomic Number\t" << atomicNumber << endl;
	cout << "Atomic Mass\t" << atomicMass << endl;
};
