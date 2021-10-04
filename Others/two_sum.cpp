class Solution {
public:
    vector<int> twoSum(vector<int>& vect, int target) {
        unordered_map<int, int> ump;
        unordered_map<int, int>::iterator itr;
        int n = vect.size();
        for(int i = 0; i < n; i++){
            itr = ump.find(target - vect[i]);
            if(itr != ump.end()){
                vect.clear();
                vect.push_back(itr->second);
                vect.push_back(i);
                break;
            }
            else
                ump[vect[i]] = i;
        }
        return vect;
        
    }
};
