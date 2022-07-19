class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>v;
        
        v.push_back({1});
        
        for(int i=1;i<numRows;i++)
        {
            vector<int>p,q=v[i-1];
            
            p.push_back(1);
            
            for(int col=1;col<i;col++)
                p.push_back( q[col-1]+q[col]);
            p.push_back(1);
            v.push_back(p);
            
        }
            
            return v;
    }
};
