class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        int aux = 0;
        
        for (auto& n : nums){
             aux = aux + n;
        }
        
        int minAux = 0;
        
        vector<int> subseq;
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        while (aux >= minAux){
            minAux = minAux + nums[0];
            aux = aux - nums[0];
            subseq.push_back(nums[0]);
            nums.erase(nums.begin());
        }
        
        return subseq;
    }
};
