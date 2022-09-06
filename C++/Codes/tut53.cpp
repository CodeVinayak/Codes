#include<iostream>
using namespace std;

class a{
    int a;
    public:
        void setdata(int a){
            this-> a =a;

        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    //This is a keyword which is a pointer which points to te object which invokes the member function
    a a;
    a.setdata(4);
    a.getdata();
    return 0;
}