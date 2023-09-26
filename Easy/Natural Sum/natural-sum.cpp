//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	int find(int n){
   	    // Code here
   	    int sum = 0;
        int s = 1; // Initialize s to 1

        while (sum < n) {
            sum += s;
            s++;
        }

        if (sum == n) {
            return s - 1; // Subtract 1 because the loop increments s one extra time
        } else {
          return -1; 
        }
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.find(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends