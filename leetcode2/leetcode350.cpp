class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        sort(nums1.begin(),nums1.begin());
        sort(nums2.begin(),nums2.end());
         vector<int> ans;
        for(int i=0;i<n;i++)
        // {   if(i>0 && nums1[i]==nums1[i-1])   
        //         continue; duplicates are allowed
        { 
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                   ans.push_back(nums1[i]);
                   nums2[j]=-1;
                   break;
                }
            }

        }
        return ans;
    }
};
