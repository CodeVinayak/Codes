#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function Objects(Functor): Function wrapped in a class so that it availabe like an object 
    int arr[]={19,3,4,21,04,1};
    // sort(arr,arr+6<int>());
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}