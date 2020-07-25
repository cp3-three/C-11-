//一个输入文件内容的实例，将输入文件作为输入流
#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	ifstream fin;
	char ch;
	fin.open("fout.txt");//将一个文件绑定到输入流 
	while((ch=fin.get())!=EOF)		//其中的good用于判断最后一个的输入操作是否成功 
	{
		cout<<ch;
	}
	fin.close(); 
	return 0;
 } 
