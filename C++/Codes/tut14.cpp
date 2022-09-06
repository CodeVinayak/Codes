#include<iostream>
using namespace std;

//structer can holds different types of data

// struct employee
// {
//     /* data */
//     int eId;
//     char FavColor;
//     float Salary;
// };

//typedef struct employee
// {
//     int eId;
//     char FavColor;
//     float Salary;
// }; ep;

//  using typedef now i can write employee id as ep in short so code will be ep harry;,ep rohan;ep prince;

// union money
// {
//     /* data */
//     int rice;//4
//     char car;//1
//     float pounds;//4
// };

int main(){

    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<m1;

    // union  money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.car;

    
    // struct employee harry;
    // struct employee rohan;
    // struct employee prince;
    // harry .eId = 01;
    // harry .FavColor= 'b';
    // harry .Salary= 1500000;
    // cout<<"The value of "<<harry.FavColor<<endl;    
    // cout<<"The value of "<<harry.eId<<endl;  
    // cout<<"The value of "<<harry.Salary<<endl;     




    return 0;
}