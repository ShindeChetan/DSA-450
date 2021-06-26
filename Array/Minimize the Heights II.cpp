class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) 
    {
        // code here
        int mn =0,mx=0,ans =0;
        
        sort(arr,arr+n);
        ans = arr[n-1] - arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i] >=k)
            {
                mx = max(arr[i-1]+k,arr[n-1]-k);
                mn = min(arr[i]-k,arr[0]+k);
                ans = min(ans,mx-mn);
            }else{
                continue;
            }
        }
            
        return ans;    
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} 
