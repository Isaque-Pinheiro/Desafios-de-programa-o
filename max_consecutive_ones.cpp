class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int max = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            
            if(nums[i] != 1){
               if(max<count){
                  max=count;
               }
               
               count=0;

            }
            
            else if(nums[i] == 1){
                    count++;
            }
            
        }
        
        if(max > count){
           return max; 
        }

        return count;
        
    }
};
