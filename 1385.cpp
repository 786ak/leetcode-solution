class Solution {
public:
    
    bool check(vector<int>&arr2,int num,int d)
    {
        int l=0,h=arr2.size()-1,mid;
        
        while(l<=h)
        {
            mid=l+((h-l)>>1);
            if(abs(arr2[mid]-num)<=d)
                return 0;
            else if(arr2[mid]<num)
                l=mid+1;
            else h=mid-1;
        }return 1;
    }
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        int count=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++)
        {
            if(check(arr2,arr1[i],d))count++;
        }
        return count;
    }
};
