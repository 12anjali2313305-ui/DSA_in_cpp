class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>v(n+1);
        v[0]=0;
        v[1]=gain[0];
        int maxAltitude=0;
        for(int i=2;i<n+1;i++)
        {
            v[i]=v[i-1]+gain[i-1];
        }
        for(int i=0;i<n+1;i++)
        {
            if(v[i]>maxAltitude)
            {
                maxAltitude=v[i];
            }
        
            
        }

        return maxAltitude;
      
    }
    
};
