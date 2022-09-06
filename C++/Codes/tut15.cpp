#include<iostream>
using namespace std;

// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }


//function prototype
//type function-name (arguments);
// int sum(int a, int b);  //---->Acceptable
// int sum(int a, b); //----> Not Acceptable
int sum(int, int b); // --------> Acceptable
void g(void); // ------>  Acceptable


int main(){
    int num1, num2;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1; //cin me << bracket dal kr code error dega
    cout<<"Enter the value of Second number "<<endl;
    cin>>num2;
    // num 1  and num 2 are actual parameters  
    cout<<"The sum is "<<sum(num1, num2);
     g();
    return 0;
}

   int sum(int a,int b){
    // Formal Parameters a and b will be taking value from actual parameters num1 and num2.
    int c = a+b;
   
    return c;
}

void g(){
    cout<<" \n Hello, Vinayak";

}

