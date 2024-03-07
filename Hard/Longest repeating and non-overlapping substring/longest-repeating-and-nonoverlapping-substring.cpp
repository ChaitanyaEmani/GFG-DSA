//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here4
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int resl = 0;
        int i,ind = 0;
        for(int i=1;i<=n;i++){
            for(int j = i+1;j<=n;j++){
                if(j-i>dp[i-1][j-1] && s[i-1]==s[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                     if(dp[i][j] > resl){
                    resl = dp[i][j];
                    ind = max(i,ind);
                }
                }
               else{
                   dp[i][j] = 0;
               }
            }
        }
        
        string res = "";
        if(resl>0){
            for(i = ind-resl+1;i<=ind;i++){
                res += s[i-1];
            }
        }
        
        if(res == ""){
            res = "-1";        
            
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends