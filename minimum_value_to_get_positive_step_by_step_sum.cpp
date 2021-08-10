class Solution {
public:

    int minStartValue(vector<int>& nums) {
        
        int sv = 1;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++){  
            
            sum = sum + nums[i];
            
            if((sum + sv) <1){
                i = -1;
                sv++;
                sum = 0;
            }
        }
        
        return sv;
    }
};
