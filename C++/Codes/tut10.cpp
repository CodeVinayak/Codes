#include<iostream>
using namespace std;
int main(){
    /*Loops ub c++:
    There are three types of loops in c++:
    1. For Loop
    2. While Loop
    3. Do-While Loop
    */

   /*For loop in c++*/
//    int i=1;
//    cout<<i;
//    i++;
//   cout<<i;
//    i++;
//    cout<<i;
//    i++;
//    cout<<i;
//    i++;
//    cout<<i;
//    i++;   // IT WILL PRINT 1,2,3,4,5

    //****Syntax for Loop*********
    // for(initialization; condition; updation)
    //{
        //  loop body(C++ Code);
   // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
       
    // }
    

    //Example of infinite for loop********* 
    //Dont try this will eat all your memory

    //     for (int i = 1; 10 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
       
    //  }

    //******While Loop  in C++*************
    //Syntax:
    //while(condition);
    //{
    //       C++ Statements;   
    //}

   //******* Printing  1 to 40 using while loop**********

//     int i=1;
//    while (i<=40){
//        cout<<i<<endl;
//        i++;
//    }

    //***Example of infinte while loop********

    // int i=1;
    // while (true){
    //     cout<<i<<endl;
    //     i++;
    // }

    //*****Table of 5 using code*********
int i=1;
    do
    {
       cout<<5<<"*"<<"="<<5*i<<endl;
       i++;
    } while (i<=10);
    
    return 0;
 }