//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            vector<int>ans;
            int n = txt.size();
            int m = pat.size();
            if(n<m) return {-1,-1};
            for(int i=0;i<n-m+1;i++){
                if(txt[i]==pat[0]){
                    if(txt.substr(i,m)==pat){
                        ans.push_back(i+1);
                    }
                    
                }
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends