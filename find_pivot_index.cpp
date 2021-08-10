class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        vector<int> ls(nums.size() +1, 0);
        
        for(int i = 1; i < ls.size(); i++){
            ls[i] = ls[i - 1] + nums[i - 1];
        }
        
        for(int i = 0; i < ls.size(); i++){
            
            if(ls[i] == ls.back() - ls[i] - nums[i]){
                return i;
            }
        }
    
        return -1;
    }
};
