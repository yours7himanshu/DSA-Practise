#include <iostream>
using namespace std;

int sum(int arr[], int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of an array" << endl;
    cin >> size;
    int arr[size];
    cout<<"Please Enter the values in an array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = sum(arr, size);

    cout << "The sum of elements in an arry is:" << ans << endl;

    return 0;
}