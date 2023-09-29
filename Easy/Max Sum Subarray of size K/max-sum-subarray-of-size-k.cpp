//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
         int i;
         long max_s = 0;
         long s = 0;
         int start = 0;
        
        for(i = 0;i<K;i++){
            s = s+ Arr[i];
        }
        
        max_s = max(s,max_s);
        
        for(int i=K;i<N;i++){
            
             s = s + Arr[i] - Arr[start];
             if(s > max_s){
                 max_s = s;
             }
             start++;
        }
        return max_s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends