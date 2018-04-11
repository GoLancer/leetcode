class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result;
        std::map<int,int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = mp.find(nums[i]);
            if (it != mp.end()) {
                result.push_back(it->second);
                result.push_back(i);
                break;
            }
            mp[target - nums[i]] = i;
        }
        
        return result;
    }
};
