#include<iostream>
using namespace std;

/*
Inheritance
student ---> Test
student --->sports
test --->result
sports --->result
*/

class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no =a;
    }
    void print_number(void){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
};

class test : virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"Your marks is here: "<<endl;
        cout<<"maths: "<< maths<<endl; 
        cout<<"physics: "<< physics<<endl; 
    }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"Your PT Score is "<<score<<endl;
    }
};
class result : public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is: "<<total<<endl;
    }
};
int main(){
    result harry;
    harry.set_number(42);
    harry.set_marks(54,80);
    harry.set_score(9);
    harry.display();
    return 0;
}