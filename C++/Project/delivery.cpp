#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
    string username,password;
    string username1,password1;

    cout << "Welcome to Tiffin Delivery" << endl;
    cout << "Please Signup " << endl;
    cout << "Create UserName" << endl;
    cin >> username;
    cout << "Create Password" << endl;
    cin >> password;
    cout << "Account Creating ";
    for (int i = 0; i < 3; i++)
    {
        cout << ".";
        Sleep(1000);
    }
    cout <<"\nAccount Created Successfully "<<endl;
    cout <<"\nRedirecting to Login Screen "<<endl;
       for (int y = 0; y < 3; y++)
    {
        cout << "";
        Sleep(1000);
    }
    system("cls");
    cout<<"Login"<<endl;
    cout << "Enter UserName " << endl;
    cin >> username1;
    cout << "Enter Password " << endl;
    cin >> password1;
    if (username==username1&&password==password1)
    {
        cout<<"Login Successfull"<<endl;
    }
    else if (username==username1&&password!=password1)
    {
         cout<<"Wrong Password"<<endl;
    }
    else if (username!=username1&&password==password1)
    {
         cout<<"Wrong Username"<<endl;
    }
    else
    {
        cout<<"Invalid Details"<<endl;
    }
    
    

    return 0;
}