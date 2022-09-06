#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERS (ONE,TWO OR MORE THAN TWP)
template<class t1,class t2......(COMMA SEPARATED)>
class nameofclass{
    //body
}

*/

template<class t1,class t2>
class myclass{
    public:
        t1 data1;
        t2 data2;
        myclass(t1 a,t2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};
int main(){
    myclass<char,float> obj('a',10.5);//int se 1-9 use kr skte hai char ke liye '' use krna hai 
    obj.display();
    return 0;
}