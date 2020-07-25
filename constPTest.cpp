//本例实现对指向常量的指针和常量指针进行测试
//在函数传参中，若要防止函数内部对传入参数的修改，可以将函数形参声明为常量指针
//但在函数中有部分特殊地方又需要修改传入参数的值，可通过通过const_cast<type_name>(var)常量指针转化为一个变量指针，
// 以此进行修改，但前提是传入的参数，本身就是变量 

//=======================常量指针（const type *）和指针常量（type * const）================================= 
//（1）const int *a 等价于（const int）*a,表示a指向的内容是常量
//即一个指针a指向的类型是一个常量，即不能通过指针a改变其指向地址的内容 ，但可改变指针a的指向 
//（2）int * const a 等价于（int *)const a,表示a本身是个常量
//常量a是一个整形的指针，即a的指向（地址）不能改变 ，但可改变其指向地址的内容 
//（3）const int * const a表示a本身是个常量，其指向的内容也是常量 
#include<iostream>

using namespace std;

int main()
{ 
	int a=1;
	const int *pa=&a;//声明指向常量的整型指针，即不能通过其改变指向的内容
	//*pa=2;报错，由于之前的声明表示不可通过pa来改变a的内容 
	int *ppa=const_cast<int *>(pa);//将一个常量指针赋值一个给一个变量指针
	*ppa=2;
	cout<<"a="<<a<<"\t"<<"*ppa="<<*ppa<<endl;//a=2,说明通过const_cast去掉了pa的const属性，这是因为其指向的a本身就是变量 
	cout<<"a的地址："<<&a<<"\t"<<"ppa指向的地址："<<ppa<<endl; 
	
	const int b=1;
	const int *pb=&b; 
	int *ppb=const_cast<int *>(pb);
	*ppb=2;
	cout<<"b="<<b<<"\t"<<"*ppb="<<*ppb<<endl;//b=1,由于b一开始就被声明为const，所以无论如何都无法改变其值 
	cout<<"b的地址："<<&b<<"\t"<<"ppb指向的地址："<<ppb<<endl; 
	
	const int c=1;
	//int *pc=&c;[Error] invalid conversion from 'const int*' to 'int*' [-fpermissive]
	
	
	//表示表示常量pp是一个整形的指针，即pp的指向（地址）不能改变 ，但可改变其指向地址的内容 
	int d=1;
	int * const pp=&a;
	*pp=3;//可改变指针pp的向地址的内容 
	//pp=&d;[Error] assignment of read-only variable 'pp',即a的指向（地址）不能改变
	
	return 0;
 } 
