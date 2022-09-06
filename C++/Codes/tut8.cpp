#include<iostream>
#include<iomanip>
using namespace std;


 int main (){
//     int a=34;
//     cout<<"The value of a was :"<<a;
//     a=45;
//     cout<<"The value of a is :"<<a;
//the value of a was changed in upper code because it was not constant

//***********Constant in C++**********************
//    const int a=3;
//    cout<<"The value of a was:"<<a;
//     a=45;
//     cout=<<"The value of a is:"<<a;
    //Now ab error dega becase of const code a is value constant rahega
 
 // Manipulators in c++
 // Example of how to Iomanip
    // int a= 3,b=45,c=100;
    // cout<<"The value of a without setw is :"<<a<<endl;
    // cout<<"The value of b without setw is :"<<b<<endl;
    // cout<<"The value of c without setw is :"<<c<<endl;

    // cout<<"The value of a is:"<<setw(10)<<a<<endl;
    // cout<<"The value of b is:"<<setw(10)<<b<<endl;
    // cout<<"The value of c is:"<<setw(10)<<c<<endl;
//<Setw(ye box me kitna width chaiye number ka likhna hai)

    //Opeators Precedence
    int a=3,b=4;
    int c=a*5+b;
    //int c=((((a*5)+b)-47)+87)
    //samaj nhi aya to google krlo
    cout<<c;

  return 0;
}
