#include <iostream>
#include <string>
#include "Dictionary.h"
using namespace std;

void main() {
	Dictionary x;
	x.Add("Omar Amin", "omar_amin@live.com");
	x.Add("Samuel Wilson", "sam_wilson@live.com");
	x.Add("John Snow", "youknownothing@johnsnow.com");
	x.Add("Hassan", "hassan@live.com");
	cout << "Before Deleting Hassan" << endl;
	x.printentries();
	x.Remove("Hassan");
	cout << "After Deleting Hassan" << endl;
	x.printentries();
}