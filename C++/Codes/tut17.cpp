#include<iostream>
using namespace std;

inline int product(int a,int b){
    // static int c=0; //this executes only once
    //c = c+1; //Next time this function is run,the value of c will be retained
    //return a*b+c;
return a*b;
}

float moneyReceived(int currentMoney, float Factor=1.04){
    return currentMoney*Factor;
}

// int strlen(const char*p){
//const variable se value constant rahega
// }
int main(){
    int a, b;
    // cout<<"Enter the value of  a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<< "Rs in your bank account , you will received "<<moneyReceived(money)<< "Rs after 1 years"<<endl;
    cout<<"For VIP: If you have "<<money<< "Rs in your bank account , you will received "<<moneyReceived(money,1.1)<< "Rs after 1 years";
    return 0;
}