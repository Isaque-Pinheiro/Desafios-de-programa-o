int removeElement(vector<int>& nums, int val) {
	
	int n = nums.size();
    int back = n-1;
    int cc = 0;
    for(int i = 0; i < n; i++){
        if(i <= back && back >= 0 && nums[i] == val){
            nums[i] = nums[back];
            back--;
            cc++;
            i--;
        }
     }
     
   return n - cc;
   
   }
};
