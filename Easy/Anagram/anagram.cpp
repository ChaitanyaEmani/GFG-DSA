//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int len_a = a.size();
        int len_b = b.size();
        
        if(len_a < len_b) return false;
        
        vector<int>c(26,0);
        vector<int>d(26,0);
        
        for(int i=0;i<len_b;i++){
            c[b[i]-'a']++;
            d[a[i] - 'a']++;
        }
        
        vector<int>ans;
        
        if(c==d) return true;
        
        return false;
        for(int i=len_b;i<len_a;i++){
            c[a[i-len_a]-'a']--;
            d[a[i]-'a']++;
        }
        
        if(c==d) return true;
        return false;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends