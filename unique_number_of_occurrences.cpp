class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int v[2001] = {0}, x;
        
        for(int x:arr)
           v[x + 1000]++;
        
        set<int> set;
        
        for(int i = 0 ; i < 2000 ; i++)
            if(v[i] && set.find(v[i]) != set.end())
                return false;
                
            else if(v[i])
                set.insert(v[i]);
        
        return true;
        
    }
};
