#include<iostream>
using namespace std;
class defaultdemo
{
	int a,b,c;
	public:
		void addnums(int a, int b=50,int c=25)
		{
			cout<<endl<<a+b+c;
		}
};
int main()
{
	defaultdemo obj;
	obj.addnums(100,100,100);
	obj.addnums(100,100);
	obj.addnums(100);
	obj.addnums();
}
