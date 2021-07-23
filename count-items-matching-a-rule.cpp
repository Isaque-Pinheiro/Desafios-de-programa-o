class Solution {
	
public:

    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int aux;
        int cont = 0;
        
        if (ruleKey == "color"){
            aux = 1;
		}
	
        else if (ruleKey == "name"){
            aux = 2;
		}
        
        int i;
        
        for (i = 0; i < items.size(); i++){
            if (items[i][aux] == ruleValue){
                cont++;
            }
        }
        return cont;
    }
};
