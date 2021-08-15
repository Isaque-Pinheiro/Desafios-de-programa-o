class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int i,res = 0,num;
        
        for(i = L; i <= R; i++){
            num=__builtin_popcount(i);
            
            if(num == 1)
                continue;
            if(isprime(num))
                res = res + 1;
        }
        
        return res;
    }
    
    bool isprime(int n){
        int j;
        
        for(j = 2; j <= n/2; j++){
            if(n % j == 0)
                return false;
        }
        
    return true;
    }
};
