class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
           int n1=a.size();
           int n2=b.size();
           int N=n1+n2;
           double median=0;
           vector<int>res(N);
           int i=0;
           int j=0;
           int k=0;
           while(i<n1 && j<n2)
           {
            if(a[i]< b[j])
             {
                res[k]=a[i];
                k++;
                i++;
             }
              else{
                res[k]=b[j];
                j++;
                k++;

               }

            }

         if(n1==i)
         {
            while(j<n2)
            {
                res[k++]=b[j++];
            }
         } 
         if(n2==j)
         {
            
             while(i<n1)
                {
                    res[k++]=a[i++];
                }
            
         } 

       if(N%2!=0)  median= res[N/2];
       else   median= (res[N/2-1]+res[N/2])/2.0;
       return median;



    }
};
