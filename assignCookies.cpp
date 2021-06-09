class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        multiset<int> y; 
        
        int cont;
        
        for(auto x : s){
            y.insert(x);
        }
        
        cont = 0;
        
        for(int i : g) {
            auto aux  = y.lower_bound(i);
            if(aux != y.end()) {
                cont++;
                y.erase(aux);
            }
        }
        return cont; 
    }
};
