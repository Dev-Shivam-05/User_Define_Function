// TNRS :- Take Nothing Return Something

#include<iostream>
using namespace std;

int sum();

int main()
{
    int result = sum();
    cout << "The Sum Of Inputed Numbers Is :- " << result;
    return 0;
}

int sum()
{
    int num_1,num_2;
    cout << "Enter A Number : ";
    cin >> num_1;
    cout << "Enter Another Number : ";
    cin >> num_2;

    return num_1 + num_2;
}
