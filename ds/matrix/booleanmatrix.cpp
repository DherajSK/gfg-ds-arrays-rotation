#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        bool row=false,column=false;
    int R=matrix.size();
    int C=matrix[0].size();
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
        {
            if(i==0 && matrix[i][j]==1)
                row=true;
            if(j==0 && matrix[i][j]==1)
                column=true;
            if(matrix[i][j]==1)
            {
                matrix[0][j]=1;
                matrix[i][0]=1;
            }
        }
    for(int i=1;i<R;i++)
        for(int j=1;j<C;j++)
            if(matrix[0][j]==1||matrix[i][0]==1)
                matrix[i][j]=1;
    if(row)
        for(int j=0;j<C;j++)
            matrix[0][j]=1;
    if(column)
        for(int i=0;i<R;i++)
            matrix[i][0]=1;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

