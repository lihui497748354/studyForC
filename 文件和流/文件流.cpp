#include <iostream>
#include <fstream>
using namespace std;
int mainA(void) {
	char data[100];
	//��дģʽ���ļ�
	ofstream outFile;
	outFile.open("C:/Users/Lenovo/Desktop/�ļ���д��.txt");
	cout << "��ʼд���ļ�" << endl;
	cout << "�����������" << endl;
	cin.getline(data, 100);
	//���ļ�д���û��������Ϣ
	outFile << data << endl;
	cout << "�����������" << endl;
	cin >> data;
	cin.ignore();
	// �ٴ����ļ�д���û����������
	outFile << data << endl;
	outFile.close();

	// �Զ�ģʽ���ļ�
	ifstream inFile;
	inFile.open("C:/Users/Lenovo/Desktop/�ļ���д��.txt");
	cout << "���ļ���ȡ����..." << endl;
	inFile >> data;

	// ����Ļ��д������
	cout << data << endl;
	// �ٴδ��ļ���ȡ���ݣ�����ʾ��
	inFile >> data;
	cout << data << endl;
	// �رմ򿪵��ļ�
	inFile.close();

	system("pause");
	return EXIT_SUCCESS;


}