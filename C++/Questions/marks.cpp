#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    //Find total marks and percentage 
    // assume maximum marks is 100
    float sub1,sub2,sub3,sub4,sub5,total,percentage;
    cout<<"\n Enter the mark obtained in Subject 1 ";
    cin>>sub1;
    cout<<"\n Enter the mark obtained in Subject 2 ";
    cin>>sub2;
    cout<<"\n Enter the mark obtained in Subject 3 ";
    cin>>sub3;
    cout<<"\n Enter the mark obtained in Subject 4 ";
    cin>>sub4;
    cout<<"\n Enter the mark obtained in Subject 5 ";
    cin>>sub5;
    total=sub1+sub2+sub3+sub4+sub5;
    cout<<"\nTotal mark obtained by student is "<<total;
    percentage=total/500*100;
    cout<<"\nTotal Percentage obtained by student is "<<percentage;

    return 0;
}