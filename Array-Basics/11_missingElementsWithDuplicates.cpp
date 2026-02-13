#include <iostream>
#include <vector>
using namespace std;
void missingElements(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] > 0)
            nums[idx] = -nums[idx];
    }

    // cout << "printing the missing elements" << endl;

    for (int i = 0; i < nums.size(); i++)
        if (nums[i] > 0)
            ans.push_back(i + 1);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
int main()
{
    vector<int> nums = {1, 3, 5, 3, 4};
    missingElements(nums);
    return 0;
}