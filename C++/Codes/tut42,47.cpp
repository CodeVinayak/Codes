#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 Classes
    1.SimpleCalculator ---->Takes input of 2 numbers using a utility function & performs =,-,*,/ and displays the results using another funtion.
    2.ScientificCalculator ---->Takes input of 2 numbers using a utility function & performs any four scientific  operation of your choice and displays the results using another funtion.
Create another class Hybrid Calculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?----->Multiple Inheritance
    Q2. What mode of inheritance are you using?----->Public Boths
    Q3. Create an object of HyridCalculator and display results of simle and scientific calculator.
    Q4. How is Code reusability implemented.
*/
class simplecalculator{
    int a,b;
    public:
    void getdatasimple(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performoperationssimple(){
        cout<<"The value of a + b is: "<<a + b<<endl;
        cout<<"The value of a - b is: "<<a - b<<endl;
        cout<<"The value of a * b is: "<<a * b<<endl;
        cout<<"The value of a / b is: "<<a / b<<endl;
    }
};
class scientificcalulator{
    int a,b;
    public:
    void getdatascientific(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performoperationsscientific(){
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        cout<<"The value of tan(a) is: "<<tan(a)<<endl;
    }
};
class hybridcalculator: public simplecalculator,public scientificcalulator{

};
int main()
{
    // simplecalculator cal1;
    // cal1.getdatasimple();
    // cal1.performoperationssimple();
    // scientificcalulator cal2;
    // cal2.getdatascientific();
    // cal2.performoperationsscientific();
    hybridcalculator calc3;
    calc3.getdatascientific();
    calc3.performoperationsscientific();
    calc3.getdatasimple();
    calc3.performoperationssimple();

    return 0;
}