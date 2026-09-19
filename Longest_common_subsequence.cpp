// class Solution {
// public:
//     // approach-1 (Recursion + Memoization)
//     int m;
//     int n;
//     int dp[1001][1001];
//     int solve(string &s1, string &s2,int i,int j){
//         if(i>=m || j>=n){
//             return 0;
//         }
//         if(dp[i][j]!=-1) 
//         return dp[i][j];
//         if(s1[i]==s2[j])
//             return  dp[i][j]=1+solve(s1,s2,i+1,j+1);
//             else 
//             return dp[i][j]=max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));
//         }
//     int longestCommonSubsequence(string s1, string s2) {
//      m=s1.size();
//      n=s2.size();
//      memset(dp,-1,sizeof(dp));
//     return solve(s1,s2,0,0);
//     }
// };



// // approach-2 (Bottom Up)
// class Solution {
// public:
//     int longestCommonSubsequence(string s1, string s2) {
//           int m=s1.size();
//           int n=s2.size();
//         vector<vector<int>>dp(m+1,vector<int>(n+1));
//         for(int i=0;i<n+1;i++){
//             dp[0][i]=0;
//         }
//          for(int i=0;i<m+1;i++){
//             dp[i][0]=0;
//         }
//         for(int i=1;i<m+1;i++){
//             for(int j=1;j<n+1;j++){
//                 if(s1[i-1]==s2[j-1]){
//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else{
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//     return dp[m][n];
//     }
// };
