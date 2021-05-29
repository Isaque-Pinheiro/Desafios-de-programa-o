class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    int x = 0, y, z = nums.size() - 1;
       
        while(z >= x){
            
            y = (x + z)/2;
            
            if(nums[y] == target)
                return y;
            
            else if(nums[y] > target)
                z = y - 1;     
            
            else
                x = y + 1;            
        }
        return x;
    }
        
};
