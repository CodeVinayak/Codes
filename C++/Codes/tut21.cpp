#include<iostream>
using namespace std;

class employee
{
    private:
     int a,b,c;
    public:
     int d,e;
     void setdata(int a,int b,int c);//declaration
     void getdata(){
         cout<<"the vlaue of a is " <<a<<endl;
         cout<<"the vlaue of b is " <<b<<endl;
         cout<<"the vlaue of c is " <<c<<endl;
         cout<<"the vlaue of d is " <<d<<endl;
         cout<<"the vlaue of e is " <<e<<endl;
     }
};

void employee :: setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    employee harry;
    //harry.a=50; --->This will show error as a is private
    harry.d= 34;
    harry.e= 55;
    harry.setdata(1,2,4);
    harry.getdata();
    
    
    return 0;
}