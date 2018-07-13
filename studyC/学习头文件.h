#ifndef _H_STUDY_HEAD_
#define _H_STUDY_HEAD_

#include <time.h>
#include <stdlib.h>

//指针函数
int max(int x, int y);

//回调函数
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void));

//获取随机值
int getNextRandomValue(void);

//I/O流，并且错误处理
void testIOAndException();

//被0除的错误
int divisorByZero();

//数的阶乘
double factorial(size_t i);

#endif // !_H_STUDY_HEAD_