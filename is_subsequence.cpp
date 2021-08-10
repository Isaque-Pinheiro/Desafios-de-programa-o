class Solution {
public:

    bool isSubsequence(string s, string t){
    
        int i = 0;
        for(int j = 0; j < t.length(); j++){
        
            bool flag = true;
            
            if(s[i] == t[j]){
				i++;
            }
            
            else{
                continue;
			}
			
	    }
        
        if(i == s.length()){
            return true;
        }
        
		return false;
        
    }
};
