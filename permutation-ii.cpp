class Solution {
public:
    
    vector<vector<int>>ans;
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        solve(nums , n ,0);
        return ans;
    }

    void solve(vector<int>nums ,int n, int level){
        if(level == n - 1){
            ans.push_back(nums);
            return;
        }
        
        sort(nums.begin() + level , nums.end());
        
        for(int i = level; i < n; i++){
            if(i != level && nums[i] == nums[i - 1]){
                continue;
            }
            
            swap(nums[i] , nums[level]);
            solve(nums , n , level + 1);
            swap(nums[i] , nums[level]);
        }
    }
};
