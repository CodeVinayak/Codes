#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size, i, j, temp;
    // Asking for input
    cout << "Enter size of array: ";
    cin >> size;
    // Enter the elements
    cout << "Enter elements in array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Sorting an array in descending order
    for (i = 0; i < size; i++)
    {
          for (j = i + 1; j < size; j++)
        {
            // If there is a greater element found on right of the array then swap it.
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Displaying output
    cout << "Elements sorted in the descending order are :" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}