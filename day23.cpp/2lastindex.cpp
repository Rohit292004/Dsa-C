#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int ans;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int sno;
    cout << "Enter searching value: ";
    cin >> sno;

    int lastIndex = -1; // Initialize lastIndex to -1

    for (int i = 0; i < 10; i++)
    {
        if (sno == arr[i])
        {
            lastIndex = i; // Update lastIndex when the element is found
        }
    }

    if (lastIndex != -1)
    {
        cout << "Found at index " << lastIndex << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}

