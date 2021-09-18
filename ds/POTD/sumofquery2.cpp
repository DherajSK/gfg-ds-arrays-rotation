
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        int prefix[n];
        prefix[0]=arr[0];
        
        for(int i=1;i<n;i++)
            prefix[i]=prefix[i-1]+arr[i];
        
        vector<int> ans;
        for(int i=0;i<2*q;i+=2)
        {
            int first=queries[i]-1;
            int second=queries[i+1]-1;
            if(first==0)
                ans.push_back(prefix[second]);
            else
                ans.push_back(prefix[second]-prefix[first-1]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cin>>q;
        int queries[2*q];
        for(int i = 0;i < 2*q;i += 2)
            cin>>queries[i]>>queries[i+1];
        
        Solution ob;
        vector<int> ans = ob.querySum(n, arr, q, queries);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
