#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	char ch;
	ifstream tfile("payroll.dat", ios_base::binary);
	if (tfile)
	{
		tfile.seekg(sizeof(double), ios_base::beg); // 从文件头跳8个字节
		while (1)
		{ // 读取操作失败时结束读操作
			tfile.get(ch); // 或写为：ch = tfile.get( ); 读入一个字符
			if (tfile.fail()) break; // 如果读入失败则退出循环
			cout << ch;
		}
	}
	else cout << "ERROR: Cannot open file: payroll.dat" << endl;
	tfile.close();
}