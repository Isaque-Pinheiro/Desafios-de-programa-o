class Solution {
public:
    int numberOfSteps(int num) {
        int curr = 0;
        while(num != 0){
            if(num %2 == 0){
                num = num/2;
                curr++;
            }else if(num % 2 == 1){
                num = num - 1;
                curr++;
            }
        }
        return curr;
    }
};
