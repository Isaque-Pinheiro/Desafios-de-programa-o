class Solution {
	
public:

    vector<int> shuffle(vector<int>& nums, int n) {
		
        vector<int> ordenado(2*n);
        
        int i, j;
        
        for(i = 0, j = 0; i < n; i++){
            vord[j++] = nums[i];
            vord[j++] = nums[n + i];
        }       
        return vord;
    }   
};
