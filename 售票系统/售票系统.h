#ifndef _SALA_TICKET_H
#define _SALA_TICKET_H
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <Windows.h>
#include <strstream>
#include <string>
using namespace std;
extern HANDLE g_hMutex;
#define NAME_LINE 40

//�����̺߳�������Ĳ����Ľṹ��

//��Ʊ��Ϣ
typedef struct __TICKET {
	int nCount;
	char strTicketName[NAME_LINE];
	__TICKET() :nCount(0) {
		memset(strTicketName, 0, NAME_LINE * sizeof(char));
	}
}TICKET;

//��Ʊ����
typedef struct __THD_DATA {
	TICKET* ticket;
	char strThreadName[NAME_LINE];
	__THD_DATA() :ticket(NULL) {
		memset(strThreadName, 0, NAME_LINE * sizeof(char));
	}
}THD_DATA;

template <class T>
string convertToString(const T val) {
	string s;
	std::strstream ss;
	ss << val;
	ss >> s;
	return s;
}

//��Ʊ����
DWORD WINAPI SaleTicket(LPVOID lpParameter);

#endif // !_SALA_TICKET_H
