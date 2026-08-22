class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum=0;
        int prod=1;
        while(n!=0)
        {
            int digit=n%10;
            sum+=digit;
            prod*=digit;
              n/=10;
        }
          int ans=sum+prod;

            if(original % ans==0)  return true;
           else  return false;
    }
};
