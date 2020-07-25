#include <iostream>

using namespace std;

int main() 
{
	enum Color{
		GREEN=3,	//内部的元素都被处理为整形，若赋值float，会报错 
		RED,		//RED=4,之后的元素自动在前一个元素上加1 
		BLUE,
	};
	
	Color red=RED;
	int num;
	num=red+BLUE;
	//red=3;无法将整形转化为enum类型，尽管系统在需要时会将enum转化为int，但不能反向 
	cout<<"num="<<num<<endl; 
	cout<<"red=" <<red<<endl;
	if(red==4)
		cout<<"比较运算时可以进行类型转化"<<endl;
}
