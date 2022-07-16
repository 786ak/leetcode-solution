class Solution {
public:
    bool issquare(int n)
    {
        int x=sqrt(n);
        return n==x*x;
    }
    int numSquares(int n) 
    {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
     while(n%4==0) n/=4;
        if(n%8==7) return 4;
    if(issquare(n)) return 1;
        for(int i=1;i*i<=n;i++)
            if(issquare(n-i*i)) return 2;
    return 3;
    }
};
