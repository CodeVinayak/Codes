#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b,c;
		int minus();
	public:
		inline void input()
		{
			cout<<endl<<"enter the value of a, b and c"<<endl;
			cin>>a>>b>>c;
		}
		void display()
		{
			cout<<endl<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c;
			cout<<endl<<"Minus is:"<<minus();
		}
		
};
int abc::minus()
{
	return a-b-c;
}
int main()
{
	abc objedcn;
	objedcn.input();
	objedcn.display();
	/*
	abc obj1;
	obj1.input();
	obj1.display();
	*/
}
