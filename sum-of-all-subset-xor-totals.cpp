class Solution{
    
public:
    int subsetXORSum(vector<int>& nums){
        
        int n = nums.size();
        int numOfSubsets = pow(2, n);
        int result = 0;
    
        for (int subset = 1; subset < numOfSubsets; subset++){
            int runningXor = 0;
            
            for (int i = 0, bits = subset; i < nums.size(); i++, bits >>= 1){
                if (bits & 1){
                    runningXor = runningXor ^ nums[i];
                }
            }
            result = result + runningXor;
        }
        
        return result;
    }
};
