//该实例中对文件输出进行测试，包括使用fstream将文件作为一个输出流

#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	char name[10];//存储物品名
	char priceName[10];
	float price;//存储价格 
	ofstream fout;//声明一个文件输出流对象
	fout.open("fout.txt");//将文件作为输入流对象 
	cout<<"统计当前某些物品的价格："<<endl; //输出到显示屏，自带的out输出流对象默认绑定显示屏 
	fout<<"统计当前某些物品的价格："<<endl; //输出到文件
	fout<<"名称"<<'\t'<<"价格"<<endl; 
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
