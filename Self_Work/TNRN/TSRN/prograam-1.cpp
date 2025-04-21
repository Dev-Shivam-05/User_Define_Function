#include<iostream>
using namespace std;

void greetUser(string a,int b)
{
    cout << "Hello "<<a<<"! Your Age Is "<<b<<"." << endl;
}

int main()
{
    string name;
    int age;

    cout << "Enter Your Name :- ";
    cin >> name;
    cout << "Enter Your Age : ";
    cin >> age;

    greetUser(name,age);
    return 0;
}