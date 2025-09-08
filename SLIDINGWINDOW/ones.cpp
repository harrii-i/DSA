//Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int count0=0;
        int maxlen=0;
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j]==0){
                count0++;
            }
            if(count0>k){
                if(nums[i]==0){
                    count0--;
                }
                i++;
            }
            
            if(count0<=k){
                int len=j-i+1;
                maxlen=max(maxlen,len);
            }
            j++;

        }
        return maxlen;
    }
};