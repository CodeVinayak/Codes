#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
	public:
		void getdata();
		void putdata();
};
void student::getdata()
{
	cout<<"\nenter roll no. of student";
	cin>>rollno;
	cout<<"\nenter name of student:";
	cin>>name;
}
void student::putdata()
{
	cout<<"\n Roll no. of student  is : "<<rollno;
	cout<<endl<<"name of the student is: "<<name;
}
int main()
{
	student obj[5];
	for(int i=0;i<5;i++)
	obj[i].getdata();
	for(int j=0;j<5;j++)
	obj[j].putdata();
	return 0;
	
}
