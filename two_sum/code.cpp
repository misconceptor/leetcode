class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();

        unordered_map<int,int> m;

        for(int i=0; i<n; ++i){
            int x = target - nums[i];
            if(m.find(x) != m.end() && m.find(x)->second != i){
                ans.push_back(i);
                ans.push_back(m.find(x)->second);
                return ans;
            }
            m[nums[i]] = i;
        }
        return ans;

    }
};
