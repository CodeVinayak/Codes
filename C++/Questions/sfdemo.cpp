#include<iostream>
using namespace std;
class sfdemo
{
	int a;
	static int count;
	public:
		void geta()
		{
			a=++count;
		}
		void display()
		{
			cout<<endl<<"a= "<<a;
		}
		static void showcount()
		{
			cout<<a;
			cout<<"\ncount="<<count;
		}
};
int sfdemo::count;
int main()
{
	sfdemo s1,s2,s3;
	s1.geta();
	s1.display();
	s2.geta();
	s2.display();
	s3.geta();
	sfdemo ::showcount();
	return 0;
}
