class Solution {
public:
    string removeOuterParentheses(string S) {
        
        string result = "";

        int i, aux = 0;  
        
        for(i = 1; i < S.size();){
            if(S[i] == '('){
                aux = aux + 1;    
            }
            
            else{
                aux = aux - 1;
            }
            
            if(aux == -1){
                aux = 0;
                i = i + 2;  
            }
            
            else{
                result = result + S[i];
                i = i + 1;
            }
        }        
        return result;        
    }
};
