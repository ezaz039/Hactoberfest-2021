#include<bits/stdc++.h>
using namespace std; 
int lengthOfLIS(vector<int>& nums) {
    vector<int> vec;
    for(auto a:nums)
    {
        if(vec.empty() or vec.back()<a)
            vec.push_back(a);
        else
            *lower_bound(vec.begin(),vec.end(),a)=a;
    }
    return vec.size();
}
int main() {
  vector<int> arr{10, 22, 9, 33, 21, 50, 41, 60};
  cout << lengthOfLIS(arr) << endl;
}
