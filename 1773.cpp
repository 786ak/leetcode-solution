#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);cout.tie(NULL);
     int count=0;
        if(ruleKey=="type")
        {
            for(auto x:items)
                if(x[0]==ruleValue) count++;
        }
        else if(ruleKey=="color")
        {for(auto x:items)
                if(x[1]==ruleValue) count++;
        }else
            for(auto x:items)
                if(x[2]==ruleValue) count++;
    return count;}
};
class Output
{
Solution obj();
int c=obj.count({{"phone","blue","lion"}},"type","phone");
cout<<c;
};