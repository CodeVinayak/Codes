#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    //*******Selection Control Structure: If-else-if else ladder

    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You will get kid  passs of party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not born yet"<<endl;
    // }
    // else{
    //     cout<<"You can come to Party"<<endl;
    // }

    //***********************selection control:switch case statements******************
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;  //break end the code & execute the program
    case 22:
        /* code */
        cout<<"You are 22"<<endl;
        break;
    case 2:
        /* code */
        cout<<"You are 2"<<endl;
        break;
        
    default:
    cout<<"No Special cases"<<endl;
        break;
    }
cout<<"Done with switch case";
return 0;
}