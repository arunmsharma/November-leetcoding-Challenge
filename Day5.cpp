//Day 5
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        for(int i=0;i<position.size();i++){
            odd+=(position[i]&1);
        }
        return min(odd,(int)position.size()-odd);
    }
};
