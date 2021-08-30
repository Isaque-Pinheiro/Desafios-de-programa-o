class Solution{
    public:
    int getXor(vector<int>&nums, int a, int b){
        int n = nums.size();
        int ans = 0;
        
        for(int i=min(a,b);i<=max(a,b);i++)ans ^= nums[i];
        
        return ans;
    }
};
