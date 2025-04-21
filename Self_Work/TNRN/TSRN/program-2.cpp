#include<iostream>
using namespace std;

void MultiplicationTable(int a)
{
    int i;
    cout << "Multiplication Table Of "<<a<<" Is:- " << endl;
    for (i=1; i<=10; i++)
    {
        cout << a << " X " << i << " = " << a*i << endl;
    }
}

int main()
{
    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    MultiplicationTable(num_1);
    return 0;
}