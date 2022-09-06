// #include <iostream>
// #include<conio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input size of array
    int n;
    cout << "Enter the Size of array " << endl;
    cin >> n;

    // declaring array
    int arr[n];

    // inpur element in array
    cout << "Enter the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    // Finding second largest logic
    int largest = INT_MIN;
    int Secondlargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            Secondlargest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > Secondlargest and arr[i] < largest)
            {
                Secondlargest = arr[i];
            }
        }
    }
    cout <<"Second largest number in the array is " <<Secondlargest;
    return 0;
}