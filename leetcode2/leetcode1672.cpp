class Solution {
public:
    int maximumWealth(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=nums[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
