//Day 16
class Solution {
public:
    int longestMountain(vector<int>& A) {
        //not the optimal one but extra space can be reduced by taking one pair instead of two array
        //  A-  2 1 4 7 3 2 5
        //  I - 1 1 2 3 1 1 2
        //  D - 2 1 1 3 2 1 1
        // An - 2 1 3 5 2 1 2
        int n = A.size();
        if(n==0){
            return 0;
        }
        int I[n],D[n];
        memset(I,0,sizeof I);
        memset(D,0,sizeof D);
        int maxx = A[0];
        I[0]=1;
        for(int i=1;i<n;i++){
            if(A[i]>maxx){
                I[i]=I[i-1]+1;
                maxx = A[i];
            }
            else{
                maxx = A[i];
                I[i]=1;
            }
        }
        maxx = A[n-1],D[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(A[i]>maxx){
                maxx = A[i];
                D[i]=D[i+1]+1;
            }
            else{
                maxx = A[i];
                D[i]=1;
            }
        }
        
        int answer = 0;
        for(int i=0;i<n;i++){
            if(I[i]!=1 and D[i]!=1)
            answer = max(answer,I[i]+D[i]-1);
        }
        return answer>=3?answer:0;
    }
};
