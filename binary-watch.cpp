class Solution {
public:
    int setbit(int n){
        
        int c = 0;
        
        while(n != 0){            
            c = c + (n % 2);
            n = n/2;
        }
        
        return c;
    
    }
    
    vector<string> readBinaryWatch(int n) {
        
        vector<int> a[7];
        
        for(int i = 0; i < 60; i++){            
            a[setbit(i)].push_back(i);
        }
        
        vector<string> ans;
        
        for(int i = 0; i <= min(4,n); i++){            
            int se = n-i;
            
            if(se < 0 ||se > 6){
                continue;
            }
            
            for(int j = 0;j < a[i].size(); j++){
                for(int k = 0; k < a[se].size(); k++){
                    
                    if(a[i][j] <= 11){                        
                        string p = to_string(a[i][j]);
                        string q = to_string(a[se][k]);
                        
                    if(q.length() == 1){
                           q = '0'+q;
                    }
                    
                    ans.push_back(p+":"+q);
                    
                    }
                    else
                        break;
                }
            }
        }
        return ans;
    }
};
