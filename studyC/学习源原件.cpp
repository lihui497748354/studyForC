#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>
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
		fprintf(stderr, "����Ϊ 0 �˳�����...\n");
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

//�ɱ����
double func(int num, ...) {
	va_list valist;
	double sum = 0.0;
	//Ϊnum��������ʼ��valist
	va_start(valist, num);
	//�������и���valist�ò���
	for (int i = 0; i < num; i++) {
		sum += va_arg(valist,int);
	}
	//����Ϊ valist �������ڴ�
	va_end(valist);
	return sum / num;
}

//��̬�ڴ����
void dynamiCmemoryAllocation() {
	char name[100];
	char *description;
	strcpy(name, "Zara Ali");
	//��̬�����ڴ�
	description = (char*)malloc(sizeof(char) * 30);
	//description = (char*)calloc(30, sizeof(char));
	if (description == NULL) {
		fprintf(stderr,"Error - unable to allocate required memory\n");
	}else {
		strcpy(description, "Zara ali a DPS student.");
	}
	//������Ҫ�����������Ϣ
	description = (char*)realloc(description, sizeof(char) * 100);
	if (description == NULL){
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}else{
		strcat(description, "She is in class 10th");
	}
	printf("Name = %s\n", name);
	printf("Description: %s\n", description);
	free(description);
}