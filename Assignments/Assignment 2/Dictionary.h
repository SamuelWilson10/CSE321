#ifndef __DICTIONARY_H
#define __DICTIONARY_H

using std::string;
class Dictionary {
private:
	string names[100];
	string emails[100];
	int size;
public:
	Dictionary() { 
		size = 0; 
	}
	void setSize(int s) {
		size = s;
	}
	int getSize() {
		return size;
	}
	void setName(int index, string name) {
		names[index] = name;
	}
	string getName(int index) {
		return names[index];
	}
	void setEmail(int index, string email) {
		emails[index] = email;
	}
	string getEmail(int index) {
		return emails[index];
	}
	bool nameExists(string name);
	bool emailExists(string email);
	void Add(string name, string email);
	void Remove(string name);
	void printentries();
};

#endif
