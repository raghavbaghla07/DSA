// Leetcode -53: Maximum Subarray

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {7, 2, 1, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;

    // if we want to know the window with maximum sum of size k, we will use an index variable to traverse the array
    int maxIdx = -1;
    for (int i = 0; i <= n - k; i++)
    {
        int currentSum = 0;
        for (int j = i; j < i + k; j++)
            currentSum += arr[j];
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
            maxIdx = i;
        }
    }
    cout << maxSum << endl
         << maxIdx << endl;
    return 0;
}