//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string S, int K) {
        // code here
        unordered_map< char,int> freq;
        int start =0,end =0, maxFreq = 0, maxLen =0;
        for(end =0;end<S.size();end++){
            freq[S[end]]++;
            maxFreq = max(maxFreq, freq[S[end]]);
            while((end-start+1)-maxFreq>K){
                freq[S[start]]--;
                start++;
            }
            maxLen = max(maxLen,end-start+1);
        }
        return maxLen;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends