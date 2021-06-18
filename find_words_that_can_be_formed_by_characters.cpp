class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
		
        map<char,int>m;  
        int res = 0, i, j, flag;
		
		char x;
        
        for(i = 0; i < chars.length(); i++){
            m[chars[i]]++;
        }
        
        for(i = 0; i < words.size(); i++){
            map<char,int> c;
            flag = 0;
            
            for(j = 0; j < words[i].length(); j++){
                c[words[i][j]]++;
            }
            
            for(x = 'a'; x <= 'z'; x++){
                if(c[x] > m[x])
                    flag = 1;
            }
            
            if(flag==0)
                res = res + words[i].length();
        }
        return res;
    }
};
