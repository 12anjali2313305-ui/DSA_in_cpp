class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++)
        {    reverse(arr[i].begin(), arr[i].end());
            for(int j=0;j<m;j++)
            {
               arr[i][j]=1-arr[i][j];
            }
        }
        return arr;
    }
};
