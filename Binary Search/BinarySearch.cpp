#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {

            end = end - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int key;
    cout << "Enter the key that you wanted to search";
    cin >> key;
    int even[6] = {1, 4, 5, 6, 80, 90};
    int odd[7] = {1, 4, 4, 5, 6, 7, 9};

    int index1 = binarySearch(even, 6, key);
    int index2 = binarySearch(odd, 7, key);

    cout << "Element found at index: " << index1 << endl;
    cout << "Element found at index: " << index2 << endl;
}