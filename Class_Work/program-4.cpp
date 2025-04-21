// TSRS :- Take Somthing Return Someting
#include<iostream>
using namespace std;

int cube(int a)
{
    return a*a*a;
}

int main()
{
    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;
    
    cout << "The Cube Of "<<num_1<<" Is : " << cube(num_1);
    return 0;
}