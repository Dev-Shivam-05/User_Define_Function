#include<iostream>
using namespace std;

int globalCounter = 0;

void updateCounter(int value)
{
    globalCounter += value;
    cout << "Counter Updated. Current Value Is :- "<< globalCounter << endl;
}

int main()
{
    int globalAmount;

    cout << "Enter A Value To Add :- ";
    cin >> globalAmount;
    updateCounter(globalAmount);

    cout << "Enter Another Value To Add :- ";
    cin >> globalAmount;
    updateCounter(globalAmount);
    return 0;
}