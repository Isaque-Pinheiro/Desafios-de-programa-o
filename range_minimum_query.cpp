void build(int arr[],int str,int end,int in,int *st){
    if(str == end){
        st[in] = arr[str];
        return;
    }
    
    int mid = (str + end)/2;
    build(arr, str, mid, 2 * in, st);
    build(arr, mid + 1, end, 2 * in + 1, st);
    
    st[in] = min(st[2 * in], st[2 * in + 1]);
}

int *constructST(int arr[],int n){
	int *st = new int[2 * n + 1];
	build(arr, 0, n - 1, 1, st);
  return st;
}


int query(int st[],int str,int end,int qstr,int qend,int in

    if(str>qend || end<qstr){
        return INT_MAX;
    }
    if(str>=qstr && end<=qend){
        return st[in];
    }
    
    int mid = (str + end)/2;
    int left = query(st, str, mid, qstr, qend, 2*in);
    int right = query(st, mid + 1, end, qstr, qend, 2*in + 1);
    
    return min(left,right);
}

int RMQ(int st[] , int n, int a, int b){
		query(st,0,n-1,a,b,1);
}
