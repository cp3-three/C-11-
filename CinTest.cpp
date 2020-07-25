//本实例对于cin进行测试

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string str,str1,str2;
	//注意输入时shell界面不会读入一个字符就将字符就写入输入流in，
	//而是按行输入（即遇到换行符，包括换行符一起输入）写入输入流istream，而cin.get只有输入流中有字符才会读取，否则等待 
	//相邻的输入字符串以空白符分隔输入，显然不能读入空白符 
	cin>>str>>str1>>str2;
	cout<<str<<str1<<str2<<endl;
	
	//利用cin.get()读入空白符
	//对于Windows一般将Ctrl+Z作为EOF(内置常量)，当必须放在行首 
	cout<<"inputing and outputing string that includes blank"<<endl; 
	char ch;
	while((ch=cin.get())!=EOF)
	{
		if(ch=='\n') continue;
		//cout.put()也可进行字符的输出 
		cout<<ch<<endl;			//由于cout的输出是遇到换行符才进行当前所有输出流的输出，故遇到换行符才会打印 
	} 

 } 
