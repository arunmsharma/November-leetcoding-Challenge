//Day 17
class Solution {
public:
    int mirrorReflection(int p, int q) {
      //p*m == q*n
        int m=1,n=1;
        while(m*p != q*n){
            n+=1;
            m = (q*n)/p;
        }
        
        if(n%2==0){
            return 2;
        }
        else{
            if(m%2==1){
                return 1;
            }
            else{
                return 0;
            }
        }
        
    }
};
