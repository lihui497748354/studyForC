#ifndef _H_STUDY_HEAD_
#define _H_STUDY_HEAD_

#include <time.h>
#include <stdlib.h>

//ָ�뺯��
int max(int x, int y);

//�ص�����
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void));

//��ȡ���ֵ
int getNextRandomValue(void);

//I/O�������Ҵ�����
void testIOAndException();

#endif // !_H_STUDY_HEAD_