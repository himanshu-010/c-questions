#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int n; // variable to store the size of the array
    cout << "Enter the size of the array: ";
    cin >> n; // input the size of the array

    vector<int> a(n); // declare a vector of size n

    cout << "Enter elements of the array: ";
    // input elements of the vector
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = INT_MIN; // initialize largest with the smallest possible integer value

    // find the largest element in the vector
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}