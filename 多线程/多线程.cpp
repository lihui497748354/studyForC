/*
	windows自带多线程创建线程
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <cstdio>
#include <tchar.h>
#include <iostream>
#include <Windows.h>

using namespace std;

//线程函数
DWORD WINAPI run(LPVOID lpParameter) {
	for (int i = 0; i < 5; i++) {
		cout << "子线程:i=" << i << endl;
		Sleep(100);
	}
	return 0L;
}

int main01() {

	//创建一个线程
	HANDLE thread = CreateThread(NULL, 0, run, NULL, 0, NULL);
	//关闭线程
	CloseHandle(thread);
	//主线程执行路径
	for (int i = 0; i < 5; i++) {
		cout << "主线程:i=" << i << endl;
		Sleep(100);
	}
	system("pause");
	return EXIT_SUCCESS;

}
