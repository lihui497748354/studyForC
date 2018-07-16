#include <iostream>
#include <fstream>
using namespace std;
int mainA(void) {
	char data[100];
	//以写模式打开文件
	ofstream outFile;
	outFile.open("C:/Users/Lenovo/Desktop/文件流写入.txt");
	cout << "开始写入文件" << endl;
	cout << "输入你得名字" << endl;
	cin.getline(data, 100);
	//向文件写入用户输入得信息
	outFile << data << endl;
	cout << "输入你得年龄" << endl;
	cin >> data;
	cin.ignore();
	// 再次向文件写入用户输入的数据
	outFile << data << endl;
	outFile.close();

	// 以读模式打开文件
	ifstream inFile;
	inFile.open("C:/Users/Lenovo/Desktop/文件流写入.txt");
	cout << "从文件读取数据..." << endl;
	inFile >> data;

	// 在屏幕上写入数据
	cout << data << endl;
	// 再次从文件读取数据，并显示它
	inFile >> data;
	cout << data << endl;
	// 关闭打开的文件
	inFile.close();

	system("pause");
	return EXIT_SUCCESS;


}