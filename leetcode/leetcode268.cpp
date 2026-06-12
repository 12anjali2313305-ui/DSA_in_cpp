class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum= (n*(n+1))/2;
        int actualsum=0;
        int resultant ;
        for(int i=0;i<n;i++)
        {
            actualsum +=nums[i];
               resultant= sum -actualsum;
        }
        return resultant;
    }
};
