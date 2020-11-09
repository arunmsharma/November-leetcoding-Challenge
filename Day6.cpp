//Day 6
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = *max_element(nums.begin(),nums.end());
        int ans = 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int s=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%mid==0){
                    s+=(nums[i]/mid);
                }
                else{
                    s+=(nums[i]/mid+1);
                }
            }
            if(s<=threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
