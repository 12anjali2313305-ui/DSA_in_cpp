class Solution {
public:
    int maxProduct(vector<int>& arr) {
       int n=arr.size();
       int max=INT_MIN;
       int smax=INT_MIN;
       int count =0;
       for(int i=0;i<n;i++)
       {
          if(arr[i]>max)  max=arr[i];
       } 

        for (int i = 0; i < n; i++) {
            if (arr[i] == max)
                count++;
        }
        
        if (count >= 2)  smax = max;
       else
     {  for(int i=0;i<n;i++)
        {
         if(smax<arr[i] && arr[i]!=max)
          {
            smax=arr[i];
          }
       }
    }
       return (smax-1)*(max-1);
    }
};
