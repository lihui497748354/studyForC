#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(string c_name, int c_age) {
	this->c_name = c_name;
	this->c_age = c_age;
}

void Customer::printInfo() {
	cout << "name:" << c_name << endl;
	cout << "age:" << c_age << endl;
	cout << endl;
}