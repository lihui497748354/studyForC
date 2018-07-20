#include <iostream>
#include "╤сап.h"
#include <cstdlib>
using namespace std;

int main() {

	MyQueue* p = new MyQueue(4);
	Customer c1("zhangsan", 1);
	Customer c2("lisi", 2);
	Customer c3("wangwu",3);

	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);

	p->QueueTraverse();


	delete p;
	p = NULL;
	system("pause");
	return EXIT_SUCCESS;
}