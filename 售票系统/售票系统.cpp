#include "��Ʊϵͳ.h"
#include <Windows.h>
#include <iostream>
using namespace std;
//��Ʊ����
DWORD WINAPI SaleTicket(LPVOID lpParameter) {
	THD_DATA* pThreadData = (THD_DATA*)lpParameter;
	TICKET* pSaleData = pThreadData->ticket;
	while (pSaleData->nCount > 0) {
		//������һ��������
		WaitForSingleObject(g_hMutex,INFINITE);
		if (pSaleData->nCount > 0) {
			cout << pThreadData->strThreadName << "���۵�" << pSaleData->nCount << "��Ʊ,";
			if (pSaleData->nCount >= 0) {
				cout << "��Ʊ�ɹ�!ʣ��" << pSaleData->nCount << "��Ʊ." << endl;
			} else {
				cout << "��Ʊʧ�ܣ���Ʊ�����ꡣ" << endl;
			}
		}
		Sleep(10);
		//�ͷŻ�����
		ReleaseMutex(g_hMutex);
	}
	return 0L;
}
