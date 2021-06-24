#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    // function to convert a given Gray equivalent n to Binary equivalent.
    public: int grayToBinary(int n)
    {
        
        int ans=0;
        for(;n;n=n>>1)
            ans^=n;
        
        return ans;
        
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}
