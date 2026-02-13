#include <iostream>
#include <vector>
using namespace std;
void missingElements(vector<int> &nums)
{
    int n = nums.size();
    vector<int> missing;
    for (int i = 0; i < n; i++)
    {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] > 0)
            nums[idx] = -nums[idx];
    }
    for (int i = 0; i < n; i++)
        if (nums[i] > 0)
            missing.push_back(i + 1);
    cout << "printing the missing elements" << endl;
    for (int i = 0; i < missing.size(); i++)
        cout << missing[i] << " ";
}
int main()
{
    vector<int> nums = {1, 3, 5, 3, 4};
    missingElements(nums);
    return 0;
}