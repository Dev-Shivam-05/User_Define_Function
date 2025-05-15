#include<ioistream>
usin namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    int array[size];
    
    int i,max=array[0];
    for (i=1; i<=size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "The Largest Number in the Array is : "<<max<<". ";
    return 0;
}