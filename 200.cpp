class Solution {
public:
    
    void dfs(vector<vector<char>>&grid,int r,int c)
    {
        int nr=size(grid); int nc=grid[0].size();
        
        if(r<0||r==nr||c<0||c==nc||grid[r][c]=='0') return;
        
        grid[r][c]='0';
        
       // if(r-1>=0&&grid[r-1][c]=='1')
            dfs(grid,r-1,c);
       // if(r+1<nr&&grid[r+1][c]=='1') 
            dfs(grid,r+1,c);
       // if(c-1>=0&&grid[r][c-1]=='1') 
            dfs(grid,r,c-1);
       // if(c+1<nc&&grid[r][c+1]=='1')
            dfs(grid,r,c+1);
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int nr=size(grid); if(!nr) return 0;
        int nc=size(grid[0]);
        int island=0;
        
        for(int r=0;r<nr;r++)
            for(int c=0;c<nc;c++)
                if(grid[r][c]=='1')
                {
                    island++;
                    dfs(grid,r,c);
                }
        return island;
    }
};
