class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector < int > max_passengers(1001, 0);
        
        for(int i = 0; i < trips.size(); i++) {
            max_passengers[trips[i][1]] += trips[i][0] ;
            max_passengers[trips[i][2]] += (-trips[i][0]) ;
        }
        
        int curr_passengers = 0 ;
        
        for(auto x : max_passengers) {
            curr_passengers = curr_passengers + x ;
            if (curr_passengers > capacity){
                return false ;
            }
        }
        return true ;
    }
};
