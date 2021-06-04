class Solution {
public:
        int minAddToMakeValid(string S) {
            
            int aux = 0, aux1 = 0;
            
            for(int i=0;i<S.size();i++){
                
                if(S[i] == '('){
                   aux++;
                }
                
                if(S[i] == ')'){
                   if(aux > 0){
                      aux--;
                    }
                
                    else{
                      aux1++;
                    }
                }
            }
        
        return aux + aux1;
       }
};

