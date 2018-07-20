#pragma once
#ifndef _CUSTOMER_H
#define _CUSTOMER_H
#include <string>
using namespace std;
class Customer {
public:
	Customer(string c_name="",int c_age=0);
	void printInfo();

private:
	string c_name;
	int c_age;
};

#endif // !_CUSTOMER_H
