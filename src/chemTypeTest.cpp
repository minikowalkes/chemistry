// GUESS WHO FIXED MOLETYPE
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "moleType.h"

using namespace std;

int main() {
	//chemType heliumAtom();
	//heliumAtom.printChemType();
	// oh my god the moleType is actually driving me nuts. I'm going to have to rewrite this constructor a billion times.
	moleType heliumMol("mol", 2.35,"Helium", "He", 2, 4.0026);
	heliumMol.printChemType();
	cout << endl;
	heliumMol.printMoleType();
	

	cout << endl;
}
