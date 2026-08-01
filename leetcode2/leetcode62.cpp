//recursive solution ..it will give TLE ..use DP.

class Solution {
public:
  int mazepath(int sr,int sc,int er,int ec)
  {
    if(sr>er ||sc>ec)  return 0;
    if(sr==er&&sc==ec)  return 1;
     int right=mazepath(sr,sc+1,er,ec);
     int down=mazepath(sr+1,sc,er,ec);
     return right+down;
  }
    int uniquePaths(int m, int n) {
        return mazepath(0,0,m-1,n-1);
    }
};
