#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	char ch;
	ifstream tfile("payroll.dat", ios_base::binary);
	if (tfile)
	{
		tfile.seekg(sizeof(double), ios_base::beg); // ���ļ�ͷ��8���ֽ�
		while (1)
		{ // ��ȡ����ʧ��ʱ����������
			tfile.get(ch); // ��дΪ��ch = tfile.get( ); ����һ���ַ�
			if (tfile.fail()) break; // �������ʧ�����˳�ѭ��
			cout << ch;
		}
	}
	else cout << "ERROR: Cannot open file: payroll.dat" << endl;
	tfile.close();
}