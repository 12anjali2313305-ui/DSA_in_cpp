class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumeven=n*(n+1);
        int sumodd=n*n;
        

        for(int i=sumodd;i>=2;i--)
        {
            if(sumodd%i==0 && sumeven%i==0)   return i;
        }
         return 1;
    }
};
