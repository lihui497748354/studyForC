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

//定义线程函数传入的参数的结构体

//车票信息
typedef struct __TICKET {
	int nCount;
	char strTicketName[NAME_LINE];
	__TICKET() :nCount(0) {
		memset(strTicketName, 0, NAME_LINE * sizeof(char));
	}
}TICKET;

//售票窗口
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

//售票程序
DWORD WINAPI SaleTicket(LPVOID lpParameter);

#endif // !_SALA_TICKET_H
