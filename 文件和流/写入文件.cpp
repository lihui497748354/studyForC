#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
//创建一个文本文件并写入信息
//同向屏幕上输出信息一样将信息输出至文件

void main() {
	ofstream ofs("C:/Users/Lenovo/Desktop/文件写入.txt");//打开文件用于写，若文件不存在就创建它
	if (!ofs) {//打开文件失败则结束运行
		return;
	}
	ofs << setw(0) << "name: " << "Beethoven" << endl;
	ofs << setw(0) << "song: " << "Moonlight Sonata" << endl;
	ofs.close();
	system("pause");
}