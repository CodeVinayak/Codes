#include<iostream>
using namespace std;

//boilerplate code 

int main(){
    // what is a pointer???? -----> data type which holds the address of other data types

    int a=3;
    int* b;
    b = &a;
    
    // &-----> (Address of) operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of b is"<<b<<endl;

   // * ----> (value at) Dereference operator
    cout<<"The value at address of b is "<<*b<<endl;

    // Pointer to Pointer
    int**c = &b;
    cout<<"The value at address of c is "<<**c <<endl;



    return 0;
}