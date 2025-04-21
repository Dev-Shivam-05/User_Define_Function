#include<iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void printMsg()
{
    time_t now = time(0);
    tm * ltm = localtime(&now);
    cout << "-----------------------" << endl;
    cout << "  Processing Complete! " << endl;
    cout << "Completed On:- " << put_time(ltm, "%Y-%m-%d %H:%M:%S") << endl;
    cout << "-----------------------" << endl;
}
int main()
{
    printMsg();
    return 0;
}