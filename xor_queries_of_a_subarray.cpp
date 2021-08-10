class Solution {
public:  
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int> xors, res;
        xors.push_back(arr[0]);
        
        for (int i = 1; i < arr.size(); i++){
            xors.push_back(arr[i] ^ xors[i-1]);
        }
        
        for (auto q:queries){
            if (q[0] == 0){
                res.push_back(xors[q[1]]);
            }
            
            else{
                res.push_back(xors[q[1]] ^ xors[q[0] - 1]);
            }
        }
        return res;
    }
};
