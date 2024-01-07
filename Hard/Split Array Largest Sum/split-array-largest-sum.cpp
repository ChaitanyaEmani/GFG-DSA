//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int l=0;
        int h=0;
        for(int i=0;i<N;i++){
            h += arr[i];
            l = max(l, arr[i]-1);
        }
        
        while(l<h-1){
            int mid = l+(h-l)/2;
            auto check = [&]() -> bool {
                int cuts =0;
                int sum =0;
                for(int i=0;i<N;i++){
                    if(sum+arr[i] > mid){
                        ++cuts;
                        sum = arr[i];
                    }
                    else{
                        sum += arr[i];
                    }
                }
                return cuts < K;
            };
            
            if(check()) h = mid;
            else l = mid;
        }
        return h;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends