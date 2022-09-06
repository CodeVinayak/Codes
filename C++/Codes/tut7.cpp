#include<iostream>
using namespace std;

// int c=45;
 int main(){
//     //************Build in Data Types**********************
//     int a,b,c;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     cout<<"Enter the value of b:"<<endl;
//     cin>>b; 
//     c=a+b;
//     cout<<"The value of c is "<<c<<endl;
//     cout<<"The value of global c is "<<::c; //because of :: this its check the global value from starting of code

    //***********Float,doble and long double Literals***********

    // float d=34.4f;
    // long double e=34.4L;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl; 
    
    // ye wala topic thoda confusing wala hai

    //*************Reference Variables***********
    // Rohan----> Monty ---> Rohu -----> Dangerous Coder

    float x= 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    //************Type Casting**************
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is"<<(float)a<<endl;
    cout<<"The value of a is"<<float(a)<<endl;

    cout<<"The value of b is"<<(int)b<<endl;
    cout<<"The value of b is"<<int(b)<<endl;
    int c= int(b);

    cout<<"The expression is"<<a+b<<endl;
    cout<<"The expression is"<<a+int(b)<<endl;
    cout<<"The expression is"<<a+(int)b<<endl;
   
    
   return 0;
 }