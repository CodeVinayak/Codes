#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying the base class variable var_base "<<var_base<<endl;
    
    }
};
class derivedclass: public  baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;

    }
};
int main(){
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;//Pointing base class pointer to derived class

    // base_class_pointer->var_derived=134;//will throw an error 
    base_class_pointer->var_base=34;
    base_class_pointer->display();
    base_class_pointer->var_base=550;
    base_class_pointer->display();

    derivedclass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived =97;
    derived_class_pointer->display();
    return 0;
}