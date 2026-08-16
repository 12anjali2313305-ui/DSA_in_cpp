class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maxi = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                maxi = max(maxi, nums[i] ^ nums[j]);
            }
        }

        return maxi;
    }
};
