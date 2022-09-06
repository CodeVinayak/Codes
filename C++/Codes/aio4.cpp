#include<iostream>
using namespace std;

// Break Statement 

int main(){
    cout<<"Break Statement example 1"<<endl;//page 209
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<'\n';
        if (i==4)
        break;
    }
    cout<<"Break Statement example 2"<<endl;
    int y=0;
    while (y<10)
    {
        if (y==4)
        {
            break;
        }
        cout<<y<<"\n";
        y++;
    }
    cout<<"Break Statement example 3"<<endl;


    return 0;
}