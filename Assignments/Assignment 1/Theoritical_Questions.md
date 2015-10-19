## Assignment 1: Theoritical Questions

1. A class is a definition of the behavior of an object. Classes are the fundamental packaging unit of OO technology. Classes  are a way to localize all the state (data) and services (typically member functions) associated with a cohesive concept. 

2. By the means on Access Control. Different Access Modifiers are used (Public, Private and Protected). A class can have multiple public, protected, or private labeled sections. A public member is accessible from anywhere outside the class but within a program. A private member variable or function cannot be accessed, or even viewed from outside the class. Only the class and neighbouring functions can access private members. A protected member variable or function is very similar to a private member but it provided one additional benefit that they can be accessed in child classes which are called derived classes (subclasses).

3. A class has a name, and it describes the state (member data) and services (member functions) provided by objects that are instances of that class. The runtime system creates each object based on a class definition. 

4. Each instance of a class (object) will allocate memory to store it's own set of data. But all those objects share the same set of member functions.

5. 
'''
#include <cstring>
using namespace std;
class BankAccount {
private:
	string name;     
	string acctnum;
	double balance;
public:
	BankAccount(const string & client, const string & num, double bal = 0.0);
	void show() const;
	void deposit(double cash);
	void withdraw(double cash);
};

'''

6. A class constructor is called when you create an object of that class or when you explicitly call the constructor. A class destructor is called when the object expires.

7. 