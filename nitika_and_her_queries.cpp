class Solution{
public:
    
    int buildTree(int *tree,int *a,int index,int s,int e){
        
        if(s == e){
            tree[index] = a[s];
            return a[s];
        }
        
        int mid =(s + e)/2;
        
        int l = buildTree(tree, a, 2 * index, s, mid);
        int r = buildTree(tree, a, 2 * index + 1, mid + 1, e);
        
        return tree[index] = l^r; 
    }
    
    int query(int *tree,int index,int s,int e,int qs,int qe){
        
        
        if(qs > e || qe < s) return 0;
        
        if(qs <= s && e <= qe)
        {
            return tree[index];
        }

        int mid =(s + e)/2;

        int leftAns = query(tree, 2 * index, s, mid, qs, qe);
        
        int rightAns = query(tree, 2 * index + 1, mid + 1, e, qs, qe);
        
        int x = leftAns ^ rightAns;
        return x;
    }
    vector<int> specialXor(int n, int q, int a[], vector<int> v[]){
       
        int *tree = new int[4 * n + 1];
        
        buildTree(tree, a, 1, 0, n-1);
        
        vector<int> ans;
        
        for(int i = 0; i < q; i++){
            int a = v[i][0];
            int b = v[i][1];
            
            int result = tree[1] ^ query(tree, 1, 1, n, a, b);          
            ans.push_back(result);
        }
        return ans;
    }
}; 
