#include "队列.h"
#include <iostream>
#include <cstdlib>
#define ZERO 0
#define ERROR -1
using namespace std;
/*
	环形队列
*/
MyQueue::MyQueue(int queueCapacity) {
	m_iQueueCapacity = queueCapacity;
	m_pQueue = new Customer[m_iQueueCapacity];
	if (m_pQueue == NULL) { 
		throw "对内存申请失败";
	}
	ClearQueue();
}

MyQueue::~MyQueue() {
	delete[] m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue() {
	m_Head = ZERO;
	m_Tail = ZERO;
	m_pQueueLen = ZERO;
}

bool MyQueue::QueueEmpty()const{
	return !m_pQueueLen ? true : false;
}

int MyQueue::QueueLength()const {
	return m_pQueueLen;
}

bool MyQueue::EnQueue(Customer element) {
	if (QueueFull()) {
		return false;
	}
	m_pQueue[m_Tail] = element;
	m_Tail++;
	m_Tail = m_Tail % m_iQueueCapacity;
	m_pQueueLen++;
	return true;
}

bool MyQueue::DeQueue(Customer& element) {
	if (QueueEmpty()) {
		return false;
	}
	element = m_pQueue[m_Head];
	m_Head++;
	m_Head = m_Head % m_iQueueCapacity;
	m_pQueueLen--;
	return true;
}

void MyQueue::QueueTraverse() {
	for (int i = m_Head; i < m_pQueueLen+ m_Head; i++) {
		m_pQueue[i%m_iQueueCapacity].printInfo();
	}
}

bool MyQueue::QueueFull() {
	return m_pQueueLen == m_iQueueCapacity ? true : false;
}
