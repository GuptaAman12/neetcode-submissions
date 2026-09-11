class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> us;
        for(int n : nums){
            us.insert(n);
        }
        if(us.size()==n){
            return false;
        }
        else return true;
    }
};