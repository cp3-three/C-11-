//��ʵ������cin���в���

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string str,str1,str2;
	//ע������ʱshell���治�����һ���ַ��ͽ��ַ���д��������in��
	//���ǰ������루���������з����������з�һ�����룩д��������istream����cin.getֻ�������������ַ��Ż��ȡ������ȴ� 
	//���ڵ������ַ����Կհ׷��ָ����룬��Ȼ���ܶ���հ׷� 
	cin>>str>>str1>>str2;
	cout<<str<<str1<<str2<<endl;
	
	//����cin.get()����հ׷�
	//����Windowsһ�㽫Ctrl+Z��ΪEOF(���ó���)��������������� 
	cout<<"inputing and outputing string that includes blank"<<endl; 
	char ch;
	while((ch=cin.get())!=EOF)
	{
		if(ch=='\n') continue;
		//cout.put()Ҳ�ɽ����ַ������ 
		cout<<ch<<endl;			//����cout��������������з��Ž��е�ǰ�������������������������з��Ż��ӡ 
	} 

 } 
