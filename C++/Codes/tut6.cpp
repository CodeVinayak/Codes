
//There are two types of headers files
//1.systen headers files: It comes with the compiler 
#include<iostream>
//2.User defined header files: it is written by the programmer
// #include "this.a" //--> This will produce an error if this.h is no present in current directory

using namespace std;
int main(){

    int a=4,b=5;

cout<<"this is is a program"<<endl; 
//<endl; gives us a new line same as \n but different is \n should be under "" double bracket


cout<<"operators in c++ ";
cout<<"\n following are the types of operators in c++"<<endl; 
//arithmetic operators
cout<<"the value of a + b is "<<a+b<<endl; 
cout<<"the value of a - b is "<<a-b<<endl; 
cout<<"the value of a * b is "<<a*b<<endl; 
cout<<"the value of a / b is "<<a/b<<endl; 
cout<<"the value of a % b is "<<a%b<<endl; 
cout<<"the value of a++ is "<<a++<<endl;// a++ ki vlaue 4 print hua kyu ki pehle print hua fir intrement hua
cout<<"the value of a-- is "<<a--<<endl;// a-- ki vlaue 5 print hua kyu ki pehle print hua fir intrement hua
cout<<"the value of ++a is "<<++a<<endl;// ++a ki vlaue 5 print hua kyu ki pehle intrement hua fir print hua
cout<<"the value of --a is "<<--a<<endl;// --a ki vlaue 4 print hua kyu ki pehle intrement hua fir print hua
 
    //Assignment operators
    // int a=3,b=9;
    // char d ="d";

    // comparison operators
    cout<<"following are the comparison operators in c++"<<endl;
    cout<<"the value of a == b is "<<(a==b)<<endl; 
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;  
    cout<<"the value of a > b is "<<(a>b)<<endl; 
    cout<<"the value of a <= b is "<<(a<=b)<<endl; 
    cout<<"the value of a >= b is "<<(a>=b)<<endl;

    //logical operators
    cout<<"following are the logical operators in c++"<<endl;
    cout<<"the value of this logical and operator (a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; 
    cout<<"the value of this logical or operator (a==b) && (a<b)) is "<<((a==b) || (a<b))<<endl; 
    cout<<"the value of this logical not operator (!(a==b))  is "<<(!(a==b))                <<endl; 


    return 0;
}