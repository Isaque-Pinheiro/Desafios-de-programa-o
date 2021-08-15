class Solution {
    public:
        bool isPowerOfFour(int num) {
            if(!(num > 0))
                return false;
        
            double temp = log(num)/log(4);
            int tempInt = (int) (temp + 0.5);
            
            if(abs(temp - tempInt) < 1e-10)
                return true;
            else
                return false;
        }
};
