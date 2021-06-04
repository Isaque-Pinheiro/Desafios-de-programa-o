class Solution {
public:
    string makeGood(string s){
        
        int n, aux, aux1;
        n = s.size();
        
        int i;
        
        for(i = 0; i < n-1; i++){
            aux = s[i];
            aux1 = s[i + 1];
            if(abs(aux1 - aux) == 32){
                s.erase(s.begin() + i, s.begin() + i + 2);
                i = -1; 
            }
        }
        
        return s;
    }
};
