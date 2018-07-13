#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include "学习头文件.h"

//指针函数(使用指针调用函数)
int max(int x,int y) {
	return x > y ? x : y;
}

//回调函数
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void)){
	for (int i = 0; i < arraySize; i++){
		array[i] = getNextValue();
	}
}
//获取随机值
int getNextRandomValue(void) {
	srand((unsigned)time(NULL));
	return rand();
}
//I/O流错误
void testIOAndException() {
	FILE *fp;
	extern int errno;
	int errnum;
	fp = fopen("unx.txt", "rb");
	if (fp == NULL){
		errnum = errno;
		fprintf(stderr, "错误号：%d\n", errno);
		perror("通过perror输出错误");
		fprintf(stderr, "打开文件错误：%s\n", strerror(errnum));
	}else{
		fclose(fp);
	}
}
//除数为0
int divisorByZero() {
	int dividend = 20;
	int divisor = 4;
	int result;
	if (!divisor){
		fprintf(stderr, "除数为 0 推出运算...\n");
		return -1;
	}
	result = dividend / divisor;
	fprintf(stderr, "result = %d\n", result);
	return 0;
}
//数的阶乘
double factorial(size_t i) {
	if (i <= 1){
		return 1;
	}
	return i * factorial(i - 1);
}