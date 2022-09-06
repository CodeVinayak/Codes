// nesting of member functions
#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin >> s;
}
void binary :: chk_bin(void){
    for (int i=0; i< s.length(); i++)
    {//! means is not and (&&) means and
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
{
    for (int i=0; i< s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
    else
      {
        s.at(i)='0' ;
      }
    
    }
}
void binary :: display(void)
{
    cout<<"Displaying your binary numbers"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
   //oops classes and objects

//    c+++ ---> initially called ---> c with classes by stroustroup
//    class ---> extension of structure (in c)
//    strucutes had limitations
            // -----> Members are public
            // ------>No methods

    // classes ------> structres + more
    // classes ------> can have methods and properties
    // classes ------> can have few members ans private as few as public
    // structures in c++ are typedefed
    // you can declare objects along with the class declaration
    /*class employee{
        //class definition
    }harry, rohan,lovish;*/
    //harry.salary =its makes no sense if salary is private

    
    

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}