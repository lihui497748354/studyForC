#include <stdio.h>
#include <stdlib.h>
#include "ѧϰͷ�ļ�.h"

int main() {

	//printf("hello  quan quan \n");
	/*
	int (*p)(int x, int y) = &max;//ָ��p ָ���˺���max
	int a = 1, b = 2, c = 3, d;
	d = p(p(a, b), c);//�ȼ��� d = max(max(a,b),c); 
	printf("���������� %d\n", d);
	*/
	/*
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", myarray[i]);
	}
	*/
	//testIOAndException();
	/*
	int result = divisorByZero();
	if (result){
		printf("����ʧ��\n");
		exit(EXIT_FAILURE);
	}else {
		printf("�������\n");
	}
	*/
	/*
	���Ľ׳�
	double result = factorial(10);
	printf("%.2lf \n", result);
	printf("Average of 2, 3, 4, 5 = %.2f\n", func(4, 2, 3, 4, 5));
	��̬�����ڴ�
	*/

	dynamiCmemoryAllocation();
	
	system("pause");
	return EXIT_SUCCESS;
}