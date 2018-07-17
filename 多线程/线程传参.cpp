#include <Windows.h>
#include <iostream>

using namespace std;

#define NAME_LINE 40

//�����̺߳�����������Ľṹ��

typedef struct __THREAD_DATA {
	int nMaxNum;
	char strThreadName[NAME_LINE];
	__THREAD_DATA() :nMaxNum(0) {
		memset(strThreadName,0,NAME_LINE * sizeof(char));
	}
}THREAD_DATA;

//�̺߳���
DWORD WINAPI ThreadProc(LPVOID lpParameter) {
	THREAD_DATA* pThreadData = (THREAD_DATA*)lpParameter; //����ת��
	for (int i = 0; i < pThreadData->nMaxNum; i++) {
		cout << pThreadData->strThreadName << "-----" << endl;
		Sleep(100);
	}
	return 0L;
}

int main() {
	//��ʼ���߳�����
	THREAD_DATA threadData1, threadData2;
	threadData1.nMaxNum = 5;
	strcpy(threadData1.strThreadName, "�߳�1");
	threadData2.nMaxNum = 10;
	strcpy(threadData2.strThreadName, "�߳�2");

	//������һ�����߳�
	HANDLE hThread1 = CreateThread(NULL, 0, ThreadProc, &threadData1, 0, NULL);
	//�����ڶ������߳�
	HANDLE hThread2 = CreateThread(NULL, 0, ThreadProc, &threadData2, 0, NULL);
	//�ر��߳�
	CloseHandle(hThread1);
	CloseHandle(hThread2);

	//���̵߳�ִ��·��
	for (int i = 0; i < 5; ++i) {
		cout << "���߳� === " << i << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}