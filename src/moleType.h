#include "chemType.h"
#include <iostream>
#include <string>
#include <cmath>	

using namespace std;

class moleType : public chemType {
private:
	string currentUnit;
	double currentAmount;

public:
	// constructors
	moleType();
	moleType(string);
	moleType(string, double);
	moleType(string, double, string); // for constructor of chemType
	moleType(string, double, string, string);
	moleType(string, double, string, string, int);
	moleType(string, double, string, string, int, double);

	// constants
	const double AVOGADRO = 6.022e23; // just in public scope to save me headaches

	// modifiers
	void setCurrentUnit(string);
	void setCurrentAmount(double);

	// accessors
	string getCurrentUnit() const;
	double getCurrentAmount() const;
	void printMoleType() const;

	// specialized method
	double dimensionalAnalysis(moleType&, string);

	// that's all for now
};
