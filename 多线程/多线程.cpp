/*
	windows�Դ����̴߳����߳�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <cstdio>
#include <tchar.h>
#include <iostream>
#include <Windows.h>

using namespace std;

//�̺߳���
DWORD WINAPI run(LPVOID lpParameter) {
	for (int i = 0; i < 5; i++) {
		cout << "���߳�:i=" << i << endl;
		Sleep(100);
	}
	return 0L;
}

int main01() {

	//����һ���߳�
	HANDLE thread = CreateThread(NULL, 0, run, NULL, 0, NULL);
	//�ر��߳�
	CloseHandle(thread);
	//���߳�ִ��·��
	for (int i = 0; i < 5; i++) {
		cout << "���߳�:i=" << i << endl;
		Sleep(100);
	}
	system("pause");
	return EXIT_SUCCESS;

}
