class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students)
    {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        int diff=0;
        sort(seats.begin(),end(seats));
        sort(begin(students),end(students));
        
        for(int i=0;i<seats.size();i++)
            diff+=abs(students[i]-seats[i]);
        return diff;
    }
};
