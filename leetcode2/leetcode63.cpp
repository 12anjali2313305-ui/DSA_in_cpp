// recursive solution ..i have not used dp. this will give TLE.

class Solution {
public:
     int mazepath (int sr,int sc,int er,int ec,vector<vector<int>>& Grid)
     {
        
       if(sr>er|| sc>ec ) return 0;
       if(Grid[sr][sc]==1) return 0;
       if(sr==er&& sc==ec) return 1;
       int rightWays=mazepath(sr,sc+1,er,ec,Grid);
       int downWays=mazepath(sr+1,sc,er,ec,Grid);
       int totalWays=rightWays+downWays;
       return totalWays;
     }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        return mazepath(0,0,n-1,m-1,obstacleGrid);
       
    }
};
