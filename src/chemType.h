#include <iostream>
#include <string>

using namespace std;  // oh no i'm using namespace std in a header file, call the cops!
// eventually will add a struct of structs containing periodic table
// idk
class chemType
{
// note to self, may be worth it to 
// change attributes to protected scope
private:
	string chemicalName;
	string chemicalSymbol;
	int atomicNumber;
	double atomicMass;	// alternatively could be molarMass

public:
	// constructors
	chemType();	
	chemType(string);
	chemType(string, string);
	chemType(string, string, int);
	chemType(string, string, int, double);

	// modifiers
	void setChemicalName(string);
	void setChemicalSymbol(string);
	void setAtomicNumber(int);
	void setAtomicMass(double);

	// accessors
	string getChemicalName() const;
	string getChemicalSymbol() const;
	int getAtomicNumber() const;
	double getAtomicMass() const;
	void printChemType() const;

	//~chemType(); may add this later... idk maybe not
};
