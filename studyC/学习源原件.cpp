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