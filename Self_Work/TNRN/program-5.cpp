#include<iostream>
using namespace std;

int counter = 0;

void count()
{
    counter++;
    cout << "Counter Value :- " << counter << endl;
}

int main()
{
    count();
    count();
    count();
    return 0;
}