//һ�������ļ����ݵ�ʵ�����������ļ���Ϊ������
#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	ifstream fin;
	char ch;
	fin.open("fout.txt");//��һ���ļ��󶨵������� 
	while((ch=fin.get())!=EOF)		//���е�good�����ж����һ������������Ƿ�ɹ� 
	{
		cout<<ch;
	}
	fin.close(); 
	return 0;
 } 
