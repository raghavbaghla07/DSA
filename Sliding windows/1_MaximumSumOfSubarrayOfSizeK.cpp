// Maximum sum of Subarray of size k

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {7, 2, 1, 5, 8, 4, 9, 3, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     int maxSum = INT_MIN;

//     // if we want to know the window with maximum sum of size k, we will use an index variable to traverse the array
//     int maxIdx = -1;
//     for (int i = 0; i <= n - k; i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < i + k; j++)
//             currentSum += arr[j];
//         if (maxSum < currentSum)
//         {
//             maxSum = currentSum;
//             maxIdx = i;
//         }
//     }
//     cout << maxSum << endl
//          << maxIdx << endl;
//     return 0;
// }

// T.C: O (n-k+1)*k ~ O(n*k)

//* Approach: 2 Sliding windows

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {7, 2, 1, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;

    int maxSum = INT_MIN;
    int maxIdx = 0;
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;
    int i = 1;
    int j = k;
    while (j < n)
    {
        sum = sum + arr[j] - arr[i - 1];
        if (maxSum < sum)
        {
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout << maxSum << endl
         << maxIdx << endl;
    return 0;
}

// T.C = O(n)