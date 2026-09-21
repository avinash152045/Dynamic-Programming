// tabulation and memoization code for edit distance problem number leetcode 72

class Solution {
public:
     int dp[501][501];
    int solve(string w1, string w2,int i,int j){
        if(i>=w1.size()){
            return w2.size()-j;
        }
          if(j>=w2.size()){
            return w1.size()-i;
        }
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(w1[i]==w2[j]){
            return dp[i][j]=solve(w1,w2,i+1,j+1);
        }
        int insert =1+  solve(w1,w2,i,j+1);
        int deletes=1+  solve(w1,w2,i+1,j);
        int replace =1+ solve(w1,w2,i+1,j+1);

        return dp[i][j]=min({insert,deletes,replace});
    }
    int minDistance(string w1, string w2) {
        memset(dp,-1,sizeof(dp));
        return solve(w1,w2,0,0);
    }
};