//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    
	    int ans=0;
	    unordered_map<int,int>mpp;
	    mpp.insert({0,-1});
	    int s = 0;
	    for(int i=0;i<n;i++){
	        s = s+arr[i];
	        int r = s%k;
	        if(r<0) r +=k;
	        if(mpp.find(r)==mpp.end()) // not seen in the map
	        {
	            mpp.insert({r,i});
	        }else{
	            ans = max(ans, i-mpp[r]);
	        }
	        
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends