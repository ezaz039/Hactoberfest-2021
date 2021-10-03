#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int left[height.size()], right[height.size()];
        int curr = INT_MIN;
        for (int i = 0; i < height.size(); i++)
        {
            curr = max(curr, height[i]);
            left[i] = curr;
        }
        curr = INT_MIN;
        for (int i = height.size() - 1; i >= 0; i--)
        {
            curr = max(curr, height[i]);
            right[i] = curr;
        }
        int ans = 0;
        for (int i = 0; i < height.size(); i++)
            ans += min(left[i], right[i]) - height[i];
        return ans;
    }
};

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    Solution s;
    cout << s.trap(height);
    return 0;
}