//Day 18
class Solution {
public:
    static bool comp(vector<int> &v1,vector<int>&v2){
        if(v1[0]==v2[0]){
            return v1[1]<v2[1];
        }
        else{
            return v1[0]<v2[0];
        }
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==0){
            return {};
        }
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            vector<int>v = ans.back();
            if(v[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.pop_back();
                vector<int>newinterval(2,0);
                newinterval[0]=min(v[0],intervals[i][0]);
                newinterval[1]=max(v[1],intervals[i][1]);
                ans.push_back(newinterval);
            }
        }
        return ans;
    }
};
