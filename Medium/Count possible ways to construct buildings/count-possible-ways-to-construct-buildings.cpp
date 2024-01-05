//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    if(N==1){
	        return 4;
	    }
	    if(N==2){
	        return 9;
	    }
	    long long int mod = 1e9+7;
	    int p2 =2,p1 = 3, present = 0;
	    for(int i=3;i<=N;i++){
	        present =(p1+p2+mod)%mod;
	        p2 = p1;
	        p1 = present;
	    }
	    long long total = ((present%mod)*(present%mod))%mod;
	    return total;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends