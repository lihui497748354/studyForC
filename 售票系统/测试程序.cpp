#include "��Ʊϵͳ.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;


int main() {

	//����һ��������
	//g_hMutex = CreateMutex(NULL, FALSE, NULL);
	//��ʼ����Ʊ
	TICKET ticket;
	ticket.nCount = 100;
	strcpy(ticket.strTicketName, "����-->����");

	const int THREAD_NUMM = 8;
	THD_DATA thdData[THREAD_NUMM];//8������
	HANDLE handle[THREAD_NUMM];//8���߳�
	for (int i = 0; i < THREAD_NUMM; i++) {
		thdData[i].ticket = &ticket;//������Դ����Ʊ��
		string strThreadName = convertToString(i);
		strThreadName += "����";
		strcpy(thdData[i].strThreadName, strThreadName.c_str());
		//�����߳�
		handle[i] = CreateThread(NULL, 0, SaleTicket, &thdData[i], 0, NULL);
		//�����ȡһ��������
		//WaitForSingleObject(g_hMutex, INFINITE);
		cout << thdData[i].strThreadName << "��ʼ����" << ticket.strTicketName << "��Ʊ" << endl;
		//�ͷŻ�����
		//ReleaseMutex(g_hMutex);
		CloseHandle(handle[i]);
	}

	system("pause");
	return EXIT_SUCCESS;
}