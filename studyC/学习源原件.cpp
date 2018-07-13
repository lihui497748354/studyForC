#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include "ѧϰͷ�ļ�.h"

//ָ�뺯��(ʹ��ָ����ú���)
int max(int x,int y) {
	return x > y ? x : y;
}

//�ص�����
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void)){
	for (int i = 0; i < arraySize; i++){
		array[i] = getNextValue();
	}
}
//��ȡ���ֵ
int getNextRandomValue(void) {
	srand((unsigned)time(NULL));
	return rand();
}
//I/O������
void testIOAndException() {
	FILE *fp;
	extern int errno;
	int errnum;
	fp = fopen("unx.txt", "rb");
	if (fp == NULL){
		errnum = errno;
		fprintf(stderr, "����ţ�%d\n", errno);
		perror("ͨ��perror�������");
		fprintf(stderr, "���ļ�����%s\n", strerror(errnum));
	}else{
		fclose(fp);
	}
}
//����Ϊ0
int divisorByZero() {
	int dividend = 20;
	int divisor = 4;
	int result;
	if (!divisor){
		fprintf(stderr, "����Ϊ 0 �Ƴ�����...\n");
		return -1;
	}
	result = dividend / divisor;
	fprintf(stderr, "result = %d\n", result);
	return 0;
}
//���Ľ׳�
double factorial(size_t i) {
	if (i <= 1){
		return 1;
	}
	return i * factorial(i - 1);
}