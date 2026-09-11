class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if (map.find(moreNeeded) != map.end()) {
            return {map[moreNeeded], i};
        }
        map[num] = i;
    }
    }
};
