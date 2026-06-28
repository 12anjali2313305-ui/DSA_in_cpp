class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int n=nums.size();
         int maxsum = INT_MIN;
         int prefix=0;
         for(int i=0;i<n;i++)
         {
            prefix+=nums[i];
            maxsum=max(maxsum,prefix);
            if(prefix<0)
            {
                prefix=0;
            }
         }
         return maxsum;
        
         

        
    }
};
