#include <iostream>

using namespace std;

int main() 
{
	enum Color{
		GREEN=3,	//�ڲ���Ԫ�ض�������Ϊ���Σ�����ֵfloat���ᱨ�� 
		RED,		//RED=4,֮���Ԫ���Զ���ǰһ��Ԫ���ϼ�1 
		BLUE,
	};
	
	Color red=RED;
	int num;
	num=red+BLUE;
	//red=3;�޷�������ת��Ϊenum���ͣ�����ϵͳ����Ҫʱ�Ὣenumת��Ϊint�������ܷ��� 
	cout<<"num="<<num<<endl; 
	cout<<"red=" <<red<<endl;
	if(red==4)
		cout<<"�Ƚ�����ʱ���Խ�������ת��"<<endl;
}
