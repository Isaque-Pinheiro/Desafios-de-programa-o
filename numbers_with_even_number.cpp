class Solution {
	
public:
    
    int findNumbers(vector<int>& nums) {
            
    int aux, cont = 0;

    for (int i = 0; i < nums.size(); i++){	
	    aux = 0;
	    while(nums[i]>0){
		nums[i] = nums[i] / 10;
		aux++;
        }
        
        if (aux % 2 == 0){
			cont++;	
	    }
	  
    }
    return cont;       
    }
};
