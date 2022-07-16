class Solution {
public:
    int countPrimes(int n) 
    {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        if(!n||n==1) return 0;
        vector<bool>sieve(n,1);
        sieve[1]=sieve[0]=0;
        for(int i=2;i*i<n;i++)
        {
           if(!sieve[i])
            continue;
            for(int k=2*i;k<n;k+=i)
            {
                sieve[k]=0;
            }
        }
      // for(int i=0;i<n;i++) cout<<i<<" "<<sieve[i]<<" ";
        int count=0;
        
        for(int i=2;i<n;i++)
        {
            if(sieve[i])
                count++;
        }
        return count;
    }
};
