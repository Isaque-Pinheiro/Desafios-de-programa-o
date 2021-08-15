class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        const int base = (1 << maximumBit) - 1;
        int n = nums.size();
        
        for (int i = 1; i < n; i++) {
            nums[i] ^= nums[i - 1];
        }
		
        vector<int> res(n);
        
        for (int i = 0; i < n; i++) {
            res[i] = (nums[ n - 1 - i]&base) ^ base;
        }
        
        return res;
    }
};
