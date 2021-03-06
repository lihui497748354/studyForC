#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <iostream>

using namespace std;

#define NAME_LINE 40

//定义线程函数传入参数的结构体

typedef struct __THREAD_DATA {
	int nMaxNum;
	char strThreadName[NAME_LINE];
	__THREAD_DATA() :nMaxNum(0) {
		memset(strThreadName,0,NAME_LINE * sizeof(char));
	}
}THREAD_DATA;

//线程函数
DWORD WINAPI ThreadProc(LPVOID lpParameter) {
	THREAD_DATA* pThreadData = (THREAD_DATA*)lpParameter; //类型转换
	for (int i = 0; i < pThreadData->nMaxNum; i++) {
		cout << pThreadData->strThreadName << "-----" << endl;
		Sleep(100);
	}
	return 0L;
}

int main() {
	//初始化线程数据
	THREAD_DATA threadData1, threadData2;
	threadData1.nMaxNum = 5;
	strcpy(threadData1.strThreadName, "线程1");
	threadData2.nMaxNum = 10;
	strcpy(threadData2.strThreadName, "线程2");

	//创建第一个子线程
	HANDLE hThread1 = CreateThread(NULL, 0, ThreadProc, &threadData1, 0, NULL);
	//创建第二个子线程
	HANDLE hThread2 = CreateThread(NULL, 0, ThreadProc, &threadData2, 0, NULL);
	//关闭线程
	CloseHandle(hThread1);
	CloseHandle(hThread2);

	//主线程的执行路径
	for (int i = 0; i < 5; ++i) {
		cout << "主线程 === " << i << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}