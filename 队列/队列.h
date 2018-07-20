#pragma once
#ifndef _MY_QUEUE_H
#define _MY_QUEUE_H
#include "Customer.h"

class MyQueue {
public:
	MyQueue(int queueCapacity);//��������
	virtual ~MyQueue();//���ٶ���
	void ClearQueue();//��ն���
	bool QueueEmpty()const;//�ж϶����Ƿ�Ϊ��
	int QueueLength()const;//���г���
	bool EnQueue(Customer element);//��Ԫ�����
	bool DeQueue(Customer &element);//��Ԫ�س���
	void QueueTraverse();//��������
	bool QueueFull();//������Ա
private:
	Customer *m_pQueue;//ָ����е�ָ��
	int m_pQueueLen;//���е�Ԫ�ظ���
	int m_iQueueCapacity;//������������
	int m_Head;//����ͷ
	int m_Tail;//����β
};
#endif // !_MY_QUEUE_H
