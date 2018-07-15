#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "hello";
	string str2 = "world";
	string str3;
	int len;

	//复制str1到str3;
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	//连接str1 和 str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	//连接后str3得总长度
	len = str3.size();
	cout << "str3.size(): " << len << endl;

	system("pause");
	return EXIT_SUCCESS;

}