//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<n;i++){
           mpp[arr[i]]++;
        }
        
        for(auto i:mpp){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        
        if(v.size()==0) return {-1};
        sort(v.begin(),v.end());
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends