#include <iostream>
#include "ex1BankAccount.h"

int main() {
  using std::cout;

  cout << "Creating objects using constructos" << std::endl;
  BankAccount b1("JNU", "234", 12345.0);
  b1.show();

  BankAccount b2=BankAccount("SCAU", "0123", 23456.0);
  b2.show();

  cout << "Deposite money to b1" << std::endl;;
  b1.deposite(100.2);
  b1.show();

  cout << "withdraw money from b2" << std::endl;;
  b2.withdraw(50.1);
  b2.show();

  return 0;
}
