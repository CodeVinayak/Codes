#include<iostream>
#include<fstream>

/*
The Useful classes for working with files in c++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/

// In order work with file in c++,you will have to open it. Primarily, There are 2 ways to open a files: 
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

int main(){
    // string st="vinayak bro";
    //Opening files using contructor and writing it
    // ofstream out("sample60.txt");//Write Operation
    // out<<st;

    string st="vinayak bro";
    string st2;
    //Opening files using contructor and reading it
    ifstream in("sample60b.txt");//Read Operation
    // in>>st2;
    getline(in,st2);
    getline(in,st2);
    getline(in,st2);
   
    cout<<st2;
    return 0;
}