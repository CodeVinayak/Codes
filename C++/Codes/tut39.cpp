#include<iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
};
/*
For a protected member:
                        Public Derivation   Private Derivation  Protected Derivation
    1.Private members   Not Inherited       Not Inherited        Not Inherited 
    2.Public members    Public              Private              Protechted
    3.Protected members Protected           Private              Protected    
*/
class derived:protected base{

};
int main(){
    base b;
    derived d;
    // cout<<b.a;      // will not work since a is protected in both base as well as derived as in derived class
    return 0;
}