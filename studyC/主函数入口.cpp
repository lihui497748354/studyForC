#include <stdio.h>
#include <stdlib.h>
#include "学习头文件.h"

int main() {

	//printf("hello  quan quan \n");
	/*
	int (*p)(int x, int y) = &max;//指针p 指向了函数max
	int a = 1, b = 2, c = 3, d;
	d = p(p(a, b), c);//等价于 d = max(max(a,b),c); 
	printf("最大的数字是 %d\n", d);
	*/
	/*
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", myarray[i]);
	}
	*/

	testIOAndException();
	system("pause");
	return EXIT_SUCCESS;
}