#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
//����һ���ı��ļ���д����Ϣ
//ͬ����Ļ�������Ϣһ������Ϣ������ļ�

void main() {
	ofstream ofs("C:/Users/Lenovo/Desktop/�ļ�д��.txt");//���ļ�����д�����ļ������ھʹ�����
	if (!ofs) {//���ļ�ʧ�����������
		return;
	}
	ofs << setw(0) << "name: " << "Beethoven" << endl;
	ofs << setw(0) << "song: " << "Moonlight Sonata" << endl;
	ofs.close();
	system("pause");
}