class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
         int n = nums.size();
         int elementsum=0;
         int digitsum=0;
         
         for(int i=0;i<n;i++)
         {
            elementsum+=nums[i];
         }
         for(int i=0;i<n;i++)
         {
           int temp=nums[i];
           while(temp>0)
          {
            int digit=temp%10;
            
            digitsum+=digit;
            temp/=10;
          }
        }  
         return elementsum -digitsum;
    }
};
