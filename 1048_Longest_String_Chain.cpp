#include <bits/stdc++.h>
using namespace std; 
    bool ispred(string &i,string &j){
        int m=i.size();
        int n=j.size();
        if(n>=m || m-n!=1) return false;
        int a=0,b=0;
         while(a<m && b<n){
            if(i[a]==j[b])
            b++;

            a++;
         }

        return b==n;
    }
    int longestStrChain(vector<string>& words) {
       sort(words.begin(), words.end(), [](string &a, string &b) {
       return a.size() < b.size();
       });
        int n=words.size();
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(ispred(words[i],words[j])){
                    dp[i]=max(dp[i],1+dp[j]);
                    maxi=max(maxi,dp[i]);
                }
            }
        }
        return maxi;
    };