// TSRN :- Take Something Return Nothing

#include<iostream>
using namespace std;

void add(int a,int b)
{
    cout << "The Sum Of "<<a<<" And "<<b<<" Is :- "<<a+b<<".";
}

int main()
{
    int num_1,num_2;
    
    cout << "Enter a Number : ";
    cin >> num_1;
    cout << "Enter Another Number : ";
    cin >> num_2;
    add(num_1,num_2);
    return 0;
}