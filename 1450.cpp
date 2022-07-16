class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);cout.tie(NULL);
        int count=0;
      // just check whether querytime lies between start and end time
            for(int i=0;i<endTime.size();i++)
            {
                if((queryTime<=endTime[i]) && (queryTime>=startTime[i]))
                    count++;
            }
        return count;
    }
};
