class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int countpos=0;
        int countneg=0;

          for(int i=0;i<n;i++)
          {
            if(nums[i]==0)  continue;
            else if(nums[i]>0)  countpos++;
            else  countneg++;
          }
          return max(countpos,countneg);
    }
};
