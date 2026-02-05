#include <iostream>
#include <vector>
using namespace std;
void moveNegativeElementToLeft(vector<int> &arr)
{
    int i = 0;
    int j = 0;
    int n = arr.size();
    while (j < n)
    {
        if (arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    moveNegativeElementToLeft(arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}