#include<iostream>
using namespace std;
class abc
{
	static int ctr;
	public:
		void getcount()
		{
			ctr++;
		}
		
		void putcount()
		{
			cout<<endl<<ctr;
		}
};
int abc::ctr;
int main()
{
	/*abc obj;
	obj.getcount();
	obj.putcount();
	abc obj1;
	obj1.getcount();
	obj1.putcount();
	abc obj2;
	obj2.getcount();
	obj2.putcount(); */
	abc ob1,ob2,ob3;
	ob1.getcount();
	ob2.getcount();
	ob3.getcount();
	ob1.putcount();
	ob2.putcount();
	ob3.putcount();
	return 0;
	
}
