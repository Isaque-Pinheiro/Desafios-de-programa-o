class Solution {
public:
    vector<string> buildArray(vector<int>& A, int n) {
        
        vector<string> str;
        int i, j;
        
        i = 1;
        j = 0;
    
        while(j < A.size() && i <= n){
            if(A[j] == i){
                str.push_back("Push");
                i++;
                j++;
            }
            else{
                str.push_back("Push");
                str.push_back("Pop");
                i++;
            }
        }
        return str;
    }
};
