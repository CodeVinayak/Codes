#include <iostream>
using namespace std;
// Program for increment/decrement using pointer .
int main (){
  int Num = 50;
  int *p1, *p2;

  p1 = p2 = &Num;

  cout<<"p1 before incrementing: "<<p1<<endl;
  //incrementing p1
  p1++;
  cout<<"p1 after incrementing: "<<p1<<endl;

  cout<<"p2 before decrementing: "<<p2<<endl;
  //decrementing p2
  p2--;
  cout<<"p2 after decrementing: "<<p2<<endl;
  return 0;
}