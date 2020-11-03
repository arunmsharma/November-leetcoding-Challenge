//Day 3
class Solution {
public:
    int maxPower(string s) {
        //base case
        if(s.size()==0){
            return 0;
        }
        //min power is 1
        int answer = 1;
        for(int i=0;i<s.size();i++){
            int c=1;
            //keep count for consecutive characters
            while(i+1<s.size() and s[i]==s[i+1]){
                c++;
                i++;
            }
            //update answer accordingly
            answer = max(answer,c);
        }
        return answer;
    }
};
