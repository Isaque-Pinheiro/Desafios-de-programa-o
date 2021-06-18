class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
		
        int res, cont = 0;
        
        for(auto x : nums){
            cont = count(nums.begin(), nums.end(), x);
            if(cont > 1){
                res = x;
                break;
            }
        }
        return res;
    }
};
