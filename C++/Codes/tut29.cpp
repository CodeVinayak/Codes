#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // creating a constructor
    // constructor is a special member fucntion with same ame as of the  class. 
    //it is used to initializ the objects of its class
    //it is automatically invoked when ever an object is crated.

    complex(void);  // constructor declaration 
    void printnumber()
    {
        cout<<" your number is "<< a<< "+" <<b <<"i"<< endl;
    }
};
complex :: complex(void){//------>This is default constructor as it accepts/takes no prarameters
//
    a = 0;
    b = 0;
    // cout<<"hello world";
}
int main(){
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
/*characteristics of constructors
1.It should be declared in the public section of the class.
2.They are automatically invoked whenever the objects is created.
3.They cannot return value and Do not have return types.
4.It an have default arguments
5.we cannot refer to their address
*/