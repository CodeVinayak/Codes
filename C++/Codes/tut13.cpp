#include<iostream>
using namespace std;

int main(){

    //coding me number 0 se start hota hai 
    // Array Example
    // Array are used for storing similar types data for example 1,2,3,4 or a,b,c,d
    // int marks[]={23,45,56,89};

    // int mathmarks[4];
    // mathmarks[0]=25;
    // mathmarks[1]=50;
    // mathmarks[2]=75;
    // mathmarks[3]=100;

    // cout<<"These are math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;

    // // You Can Change the Value of an array
    // marks[2]=73;

    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


    // cout<<"These are marks using loops"<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks is"<<i<<marks[i]<<endl;
    // }
    
    // cout<<"The value of marks using do while loop"<<endl;
    int marks[4]={12,10,8,15};
    int i=0;
    // do
    // {
    //     cout<<"The value of marks"<<i<<"is"<<marks[i]<<endl;
    //     i++;
    // } while (i<4);

    //Pointers and arrays

    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    // cout<<"The value of *p marks[0] is"<<*p<<endl;
    // cout<<"The value of *(p+1) marks[0] is"<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) marks[0] is"<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) marks[0] is"<<*(p+3)<<endl;
    

    return 0;
}