//Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_idx,i=0,j=0,s=0;
        int n=nums.size();
        min_idx=n+1;
        int sum_check=0;
        for(int k=0;k<n;k++)
        {
            sum_check+=nums[k];
        }
        if(sum_check<target)
        {
            return 0;
        }
        else{
            while(i<=j && j<n)
        {
            while(s<target && j<n)
            {
                s=s+nums[j];
                j++;
            }
            while(s>=target && i<j)
            {
                min_idx=min(min_idx,j-i);
                s=s-nums[i];
                i++;
               
            }
        }
        }
        return min_idx;
    }
};