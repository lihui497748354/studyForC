#include "售票系统.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;


int main() {

	//创建一个互斥锁
	//g_hMutex = CreateMutex(NULL, FALSE, NULL);
	//初始化火车票
	TICKET ticket;
	ticket.nCount = 100;
	strcpy(ticket.strTicketName, "北京-->赣州");

	const int THREAD_NUMM = 8;
	THD_DATA thdData[THREAD_NUMM];//8个窗口
	HANDLE handle[THREAD_NUMM];//8个线程
	for (int i = 0; i < THREAD_NUMM; i++) {
		thdData[i].ticket = &ticket;//公共资源（车票）
		string strThreadName = convertToString(i);
		strThreadName += "窗口";
		strcpy(thdData[i].strThreadName, strThreadName.c_str());
		//创建线程
		handle[i] = CreateThread(NULL, 0, SaleTicket, &thdData[i], 0, NULL);
		//请求获取一个互斥锁
		//WaitForSingleObject(g_hMutex, INFINITE);
		cout << thdData[i].strThreadName << "开始出售" << ticket.strTicketName << "的票" << endl;
		//释放互斥锁
		//ReleaseMutex(g_hMutex);
		CloseHandle(handle[i]);
	}

	system("pause");
	return EXIT_SUCCESS;
}