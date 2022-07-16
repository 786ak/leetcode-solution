class Solution {
public:
    
    int area(vector<vector<int>>&grid,int r,int c)
    {
        int nr=grid[0].size();int nc=grid.size();
        
        if(r==nc||c==nr||r<0||c<0||grid[r][c]==0) return 0;
        grid[r][c]=0;
        
        return 1+area(grid,r+1,c)+area(grid,r-1,c)+area(grid,r,c+1)+area(grid,r,c-1);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        
        int ans=0;
        int n=grid.size();int c=grid[0].size();
        if(!n) return 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                    ans=max(ans,area(grid,i,j));
            }
        }return ans;
    }
};
