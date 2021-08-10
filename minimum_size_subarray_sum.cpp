class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        
        int i = 0, j = 0, aux = target, sum = 0, res=INT_MAX;
        
        while(j < n){
            sum = sum + nums[j];
        
            if(sum < aux){
               j++;
            }
            
            else if(sum >= aux){
                while(sum >= aux){
                    if(res > (j - i + 1)){
                    res = j - i + 1; 
                    }
                
                    sum=sum-nums[i];
                    i++;
                }
                
                j++;
            }    
        
        }
        
        return res == INT_MAX?0:res;
    }
};
