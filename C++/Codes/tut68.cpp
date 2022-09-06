#include<iostream>
using namespace std;

template<class t>
class harry{
    public:
    t data;
    harry(t a){
        data=a;
    }
    void display();
    // void display(){
    //     cout<<data;
    // }
};
template <class t>
void harry<t>::display(){
        cout<<data;
    }

void fun(int a){
    cout<<"I am First fun()"<<a<<endl;
}
template <class t>
void fun1(t a){
    cout<<"I am templatised fun()"<<a<<endl;
}
int main(){
    // harry<float>h(55.6);
    // harry<char>h('c');
    // harry<int>h(5);
    // cout<<h.data<<endl;
    // h.display();

    fun1(4);//exact match takes the highest priortiy
    // fun(4);//exact match takes the highest priortiy
    return 0;
}