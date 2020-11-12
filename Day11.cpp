//Day 11
class Solution {
    int distSq(vector<int>&v1,vector<int>&v2){
        return ((v1[0]-v2[0])*(v1[0]-v2[0]) + (v1[1]-v2[1])*(v1[1]-v2[1]));
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
         unordered_set<int>st;
         st.insert(distSq(p1,p2));
         st.insert(distSq(p1,p3));
         st.insert(distSq(p1,p4));
         st.insert(distSq(p2,p3));
         st.insert(distSq(p2,p4));
         st.insert(distSq(p3,p4));
        
         return st.size()==2 and st.find(0)==st.end();
    }
};
