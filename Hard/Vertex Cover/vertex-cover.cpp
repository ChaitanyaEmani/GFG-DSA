//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int vertexCover(int n, vector<pair<int, int>> &edges) {
                // code here
                if(n==0) return 0;
                vector<pair<int, int>> frtver,srtver;
                int fr = edges[0].first;
                int sr = edges[0].second;
                int cfv = 0, csrv = 0;
                
                for(auto edge: edges){
                    int v1 = edge.first;
                    int v2 = edge.second;
                    
                    if(!(v1 == fr || v2 == fr)) {
                        frtver.push_back({v1,v2});
                        cfv++;
                    }
                    
                    if(!(v1==sr || v2 == sr)){
                        srtver.push_back({v1,v2});
                        csrv++;
                    }
                }
                
                return 1+min(
                    vertexCover(cfv, frtver),
                    vertexCover(csrv,srtver)
                    );
                
            }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> edges;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            edges.push_back({a,b});
        }
        Solution s;
        cout<<s.vertexCover(n,edges)<<endl;
    }
    return 0;
}
// } Driver Code Ends