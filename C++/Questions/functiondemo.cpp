// program for function with no return type and with input arguments
#include<iostream>
using namespace std;

int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
int main()
{
	void cal(int,int);
	int s1;
int a,b;
cout<<"enter the value of a and b \n";
cin>>a>>b;
s1=sum(a,b);
cout<<"sum is: "<<s1;
//cal(a,b);

}
void cal(int x, int y)
{
	cout<<endl<<"sum of the number is : "<<x+y;
	cout<<endl<<"multiplication of number is :"<<x*y;
	cout<<endl<<"substraction of two no is: "<<x-y;
	cout<<endl<<"division of two no is:" <<x/y;
}

