class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        
        int res = 0; 
        int i = 0;
        
        while(i<boxTypes.size() && truckSize>0)
        {
            int x = min(boxTypes[i][0],truckSize);  
            res= res + x * boxTypes[i][1];
            truckSize = truckSize - x;
            i++;
        }
        
        return res;
        
    }
    static bool cmp(vector<int> a,vector<int> b){
        return a[1]>b[1];  //sort according to numberofunits value 
    }
};
