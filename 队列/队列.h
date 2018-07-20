#pragma once
#ifndef _MY_QUEUE_H
#define _MY_QUEUE_H
#include "Customer.h"

class MyQueue {
public:
	MyQueue(int queueCapacity);//创建队列
	virtual ~MyQueue();//销毁队列
	void ClearQueue();//清空队列
	bool QueueEmpty()const;//判断队列是否为空
	int QueueLength()const;//队列长度
	bool EnQueue(Customer element);//新元素入队
	bool DeQueue(Customer &element);//首元素出队
	void QueueTraverse();//遍历队列
	bool QueueFull();//队列满员
private:
	Customer *m_pQueue;//指向队列的指针
	int m_pQueueLen;//队列的元素个数
	int m_iQueueCapacity;//队列数组容量
	int m_Head;//队伍头
	int m_Tail;//队伍尾
};
#endif // !_MY_QUEUE_H
