#include<iostream>
using namespace std;

void checkEvenOdd(int a)
{
    if (a%2==0)
    {
        cout << "The Innputed Number "<<a<<" Is Even.";
    }
    else
    {
        cout << "The Inputed Number "<<a<<" Is Odd.";
    }
}

int main()
{
    int num_1;

    cout << "Enter A NUmber : ";
    cin >> num_1;
    
    checkEvenOdd(num_1);
    return 0;
}