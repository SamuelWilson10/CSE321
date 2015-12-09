#include <iostream>;
#include "dbc.h"
#include "Dictionary.h"
using namespace std;

bool Dictionary::nameExists(string name) {
	for (int i = 0; i <= getSize(); i++) {
		if (getName(i) == name) {
			return true;
		}
	}
	return false;
}
bool Dictionary::emailExists(string email) {
	for (int i = 0; i <= getSize(); i++) {
		if (getEmail(i) == email) {
			return true;
		}
	}
	return false;
}
void Dictionary::Add(string name, string email) {
	//DbC: Class Invariant
	INVARIANT0(getSize() <= 100);

	//DbC: Pre-condition
	REQUIRE0(!nameExists(name));
	REQUIRE0(!emailExists(email));
	REQUIRE0(name != "");
	REQUIRE0(email != "");

	//Method body
	int currentSize = getSize();
	setName(size, name);
	setEmail(size, email);
	setSize(getSize() + 1);

	//DbC: Post-condition
	ENSURE0(getName(getSize() - 1) == name);
	ENSURE0(getEmail(getSize() - 1) == email);
	ENSURE0(getSize() == currentSize + 1);

	//DbC: Class Invariant
	INVARIANT0(getSize() <= 100);
}

void Dictionary::Remove(string name) {
	//DbC: Class Invariant
	INVARIANT0(getSize() <= 100);

	//DbC: Pre-condition
	REQUIRE0(nameExists(name));

	//Method body
	int indextoberemoved;
	int currentSize = getSize();
	for (int i = 0;i < getSize();i++) {
		if (getName(i) == name) {
			indextoberemoved = i;
			break;
		}
	}
	// then i'll move all elements after that index backword one step
	// and with decrementing the size, this is equivalent to removing that element
	setSize(getSize() - 1);
	for (int i = indextoberemoved; i <= getSize();i++) {
		//setName(i, getName(i + 1));
		//setEmail(i, getEmail(i + 1));
		names[i] = names[i + 1];
		emails[i] = emails[i + 1];
	}

	//DbC: Post-condition
	ENSURE0(!nameExists(name));
	ENSURE0(getSize() == currentSize - 1);

	//DbC: Class Invariant
	INVARIANT0(getSize() <= 100);
}
void Dictionary::printentries() {
	//DbC: Class Invariant
	INVARIANT0(getSize() <= 100);

	//DbC: Pre-condition
	REQUIRE0(getSize() > 0);

	//Method body
	int currentSize = getSize();
	for (int i = 0; i < getSize(); i++)
	{
		cout << "Entry #" << i + 1 << ":" << endl << getName(i) << ": " << getEmail(i) << endl;
	}

	//DbC: Post-condition
	ENSURE0(getSize() == currentSize);

	//DbC: Class Invariant
	INVARIANT0(getSize() <= 100);
}