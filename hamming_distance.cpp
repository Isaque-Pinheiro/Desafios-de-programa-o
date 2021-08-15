class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
    
        return noOfBits(n);
    }
    
    int noOfBits(int n){
    int countOut = 0;
    while(n){
        n = (n&(n-1));
        countOut++;
    }
        
    return countOut;
    }

};
