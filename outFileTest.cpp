//��ʵ���ж��ļ�������в��ԣ�����ʹ��fstream���ļ���Ϊһ�������

#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	char name[10];//�洢��Ʒ��
	char priceName[10];
	float price;//�洢�۸� 
	ofstream fout;//����һ���ļ����������
	fout.open("fout.txt");//���ļ���Ϊ���������� 
	cout<<"ͳ�Ƶ�ǰĳЩ��Ʒ�ļ۸�"<<endl; //�������ʾ�����Դ���out���������Ĭ�ϰ���ʾ�� 
	fout<<"ͳ�Ƶ�ǰĳЩ��Ʒ�ļ۸�"<<endl; //������ļ�
	fout<<"����"<<'\t'<<"�۸�"<<endl; 
	for(int i=0;i<2;i++)
	{
		cout<<"please input the name of goods:";
		cin.getline(name,10);
		cout<<"please input the price of goods:";
		cin.getline(priceName,10);
		price=atof(priceName);
		cout<<name<<"\t"<<price<<endl;
		fout<<name<<"\t"<<price<<endl;
	}
	fout.close();
 
	return 0;
 } 
