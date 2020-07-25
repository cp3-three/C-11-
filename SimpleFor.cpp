//一个关于C++11的for遍历的实例
//由于devC++并默认采用C++98的特性，故需要在 ：工具》编译选项》 编译器页》编译时加入：-std=c++11 
#include<iostream>
using namespace std;

int main ()
{
	int a[8]={1,2,3,4,5,6,7,8};
	//遍历 
	for(int ele:a)
		cout<<ele<<"\t";
	cout<<endl;
	
	//对值进行修改 
	for (int &ele:a)
		ele=ele*10;
	for(int ele:a)
		cout<<ele<<"\t";
	
}
