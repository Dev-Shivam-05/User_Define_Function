#include<iostream>
using namespace std;

void pattern(int a)
{
    for (int i=1; i<=a; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int num_1;

    cout << "Enetr A Number : ";
    cin >> num_1;
    
    pattern(num_1);
    return 0;
}