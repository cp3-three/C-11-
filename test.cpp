#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct Students
	{
		string name;
		int age;
		bool Ismale;
	};
	cout<<"Hello World"<<endl;
	Students stu{"yang",12,true};
	cout<<stu.name<<"\t"<<stu.age<<"\t"<<stu.Ismale<<endl;
	cin.get();
	cin.get();
}
