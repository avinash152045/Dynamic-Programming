//tabulation and memoization code for Longest Palindromic Substring problem number leetcode 5
class Solution {
public:
         int  dp[1001][1001];
    bool check(int i,int j,string &s){
        if(i>j)
        return true;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
         if(s[i]==s[j]){
        return  dp[i][j]=check(i+1,j-1,s);
         }
        else{
        return   dp[i][j]=false;
        }
    }
    string longestPalindrome(string s) {
        int maxl=1,idx=0;
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        // dp[i][j]=-1(not solved yet)
        // dp[i][j]=0 (false)
        // dp[i][j]=1 (true)
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                if(check(i,j,s)){
                   if(maxl<=j-i+1){
            maxl=j-i+1;
            idx=i;
          } 
                }
            }
        }
        return s.substr(idx,maxl);
    }
};