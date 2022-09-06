#include<iostream>
#include<list>
using namespace std;

void display (list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    // 6 8 9
    list<int> list1; //List of 0 Length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    //removing elements from the list
    // list1.pop_back();//last number 12 remove krdega
    // list1.pop_front();// removed 5 from front
    // list1.remove(9);// to remove specifc number mention it here
    display(list1);

    // Shorting the list
    // list1.sort();
    // display(list1);

    list<int> list2(3); //Empty list of size 7
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=5445;
    iter++;
    *iter=485;
    iter++;
    display(list2);

    // TO merge list
    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1);


    // TO short and merge list
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);

    // list<int>::iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    

    return 0;
}