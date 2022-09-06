#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // Distance between two place is enter through keyboard in km. output in meter,feet , cm.
    int distance;
    float meter,feet,inches,centimeter;
    cout<<"Enter the distance in KM ";
    cin>>distance;
    meter = distance * 1000;
    feet = distance * 3280.84;
    inches = distance * 39370.1;
    centimeter = distance * 100000;
    cout<<"\nDistance in Meter is "<<meter;
    cout<<"\nDistance in feet is "<<feet;
    cout<<"\nDistance in inches is "<<inches;
    cout<<"\nDistance in centimeter is "<<centimeter;


}