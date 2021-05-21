class Solution {
	
public:

    vector<int> decompressRLElist(vector<int>& nums) {
		
		vector<int> dlist;
    
        for (int i = 0; i < nums.size(); i++){
            while (nums[i]--){
                dlist.push_back(nums[i + 1]);
            }
            i++;
        }      
        return dlist;      
    }  
};
