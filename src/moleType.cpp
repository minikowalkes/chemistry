//#include "chemType.h"
// THIS IS YOUR LAST CHANCE... TO BE FAMOUS... MY LOVE
// You're just as confused as I am!?!?
// I can call my friends' answering machines and make a cup of coffee
// I can have a cigarette on the balconey or...
// I really should be studying for calculus, but I'm just in the "It's just common sense" mode.
// me walking into the exam knowing F(b) - F(a) and the + c cancels because the minus sign
#include "moleType.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

moleType::moleType() {
	currentUnit = "";
	currentAmount = 0.0;
}

moleType::moleType(string u) {
	currentUnit = u;
	currentAmount = 0.0;
}

moleType::moleType(string u, double amt) {
	currentUnit = u;
	// wanna make sure we don't get negatives
	// i may eventually endeavor to make this
	// an unsigned double *spoiler alert, this will likely get buried*
	if (amt < 0) {
		cout << "Cannot have negative amounts." << endl;
		cout << "Defaulting to 0.0" << endl;
		currentAmount = 0.0;
	}
	else {
		currentAmount = amt;
	}
}

moleType::moleType(string u, double amt, string chem) {
	currentUnit = u;
	if (amt < 0) {
		cout << "Cannot have negative amounts." << endl;
		cout << "Defaulting to 0.0" << endl;
		currentAmount = 0.0;
	}
	else {
		currentAmount = amt;
	}
	chemType::setChemicalName(chem);
}

moleType::moleType(string u, double amt, string chem, string sym) {
	currentUnit = u;
	if (amt < 0) {
		cout << "Cannot have negative amounts." << endl;
		cout << "Defaulting to 0.0" << endl;
		currentAmount = 0.0;
	}
	else {
		currentAmount = amt;
	}
	chemType::setChemicalName(chem);
	chemType::setChemicalSymbol(sym);
}

moleType::moleType(string u, 
	double amt, 
	string chem, 
	string sym, 
	int aN) {
	currentUnit = u;
	if (amt < 0) {
		cout << "Cannot have negative amounts." << endl;
		cout << "Defaulting to 0.0" << endl;
		currentAmount = 0.0;
	}
	else {
		currentAmount = amt;
	}
	chemType::setChemicalName(chem);
	chemType::setChemicalSymbol(sym);
	chemType::setAtomicNumber(aN);
}

moleType::moleType(string u, 
	double amt, 
	string chem,
	string sym,
	int aN,
	double aM) {
	currentUnit = u;
	if (amt < 0) {
		cout << "Cannot have negative amounts." << endl;
		cout << "Defaulting to 0.0" << endl;
		currentAmount = 0.0;
	}
	else {
		currentAmount = amt;
	}
	chemType::setChemicalName(chem);
	chemType::setChemicalSymbol(sym);
	chemType::setAtomicNumber(aN);
	chemType::setAtomicMass(aM);
}

void moleType::setCurrentUnit(string u) {
	// we'll have to make a struct of valid units
	// eventually......... RAHHHHHH
	currentUnit = u;
}

void moleType::setCurrentAmount(double a) {
	if (a < 0) {
		cout << "Cannot have negative amounts." << endl;
		cout << "Defaulting to 0.0" << endl;
		currentAmount = 0.0;
	}
	else {
		currentAmount = a;
	}
}

string moleType::getCurrentUnit() const {
	return currentUnit;
}

double moleType::getCurrentAmount() const {
	return currentAmount;
}

void moleType::printMoleType() const {
	// again, will eventually make this pretty
	// with iomanip possibly... idk
	cout << "Current amount:\t" << currentAmount 
		<< " " << currentUnit << endl;
}

// gonna have to redo this function header so It can just eat the moleType
// and spit out a "default" conversion based on its current unit
double moleType::dimensionalAnalysis(moleType& m, string unitC) {
	if (m.currentUnit == unitC) {
		cout << "Invalid operation" << endl;
		return 1;
	}
	// will eventually have to rewrite this if statement to
	// account for capital letters *fart noise*
	if (unitC == "mol" ||
		unitC == "mole" ||
		unitC == "moles") {
		return m.currentAmount * AVOGADRO;
	}
	// uhhh what else could we have
	if (unitC == "atom" ||
		unitC == "atoms" ||
		unitC == "molecule" ||
		unitC == "molecules") {
		return AVOGADRO / m.currentAmount;
	}
  // gonna need formula unit... 
  // also need to account for molecule type?!?!?!? DAMNIT.
	// that's all for now
};
