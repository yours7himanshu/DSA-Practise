#include <iostream>
using namespace std;

void counting(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
}

int main()
{
    int n;
    cout << "Enter the number that you wanted to print counting" << endl;
    cin >> n;
    counting(n);

    return 0;
}