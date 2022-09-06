#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array
int main(){
    map<string,int>marksmap;
    marksmap["vinayak"]=99;
    marksmap["Techy"]=84;
    marksmap["mobile"]=04;

    marksmap.insert({{"kozume",169},{"kuroo",187}});
    map<string,int>::iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The max size is: "<<marksmap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksmap.empty()<<endl;
    return 0;
}