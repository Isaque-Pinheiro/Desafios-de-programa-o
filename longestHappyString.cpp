class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s = "";
        char prev = '#';
        char curr = (a==max(a, max(b, c)) ? 'a' : b==max(a, max(b, c)) ? 'b' : 'c');
        while(a || b || c){
            if(curr == 'a' && a){
                s = s+ 'a';
                a--;
                curr = (prev != 'a') ? 
                    (a == max(a, max(b, c)) ? 'a' : b == max(a, max(b, c)) ? 'b' : 'c') : 
                (b == max(b, c) ? 'b' : 'c');
                prev = 'a';
            }else if(curr == 'b' && b){
                s = s+'b';
                b--;
                curr = (prev != 'b') ? 
                    (a == max(a, max(b, c)) ? 'a' : b == max(a, max(b, c)) ? 'b' : 'c') : 
                (a == max(a, c) ? 'a' : 'c');
                prev = 'b';
            }else if(curr == 'c' && c){
                s = s+'c';
                c--;
                curr = (prev != 'c') ? 
                    (a == max(a, max(b, c)) ? 'a' : b == max(a, max(b, c)) ? 'b' : 'c') : 
                (a == max(a, b) ? 'a' : 'b');
                prev = 'c';
            }else{
                break;
            }
        }
        return s;
    }
};
