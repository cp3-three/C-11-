//һ������C++11��for������ʵ��
//����devC++��Ĭ�ϲ���C++98�����ԣ�����Ҫ�� �����ߡ�����ѡ� ������ҳ������ʱ���룺-std=c++11 
#include<iostream>
using namespace std;

int main ()
{
	int a[8]={1,2,3,4,5,6,7,8};
	//���� 
	for(int ele:a)
		cout<<ele<<"\t";
	cout<<endl;
	
	//��ֵ�����޸� 
	for (int &ele:a)
		ele=ele*10;
	for(int ele:a)
		cout<<ele<<"\t";
	
}
