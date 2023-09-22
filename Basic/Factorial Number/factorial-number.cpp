//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    int isFactorial(int N){
        //code here
        for (int i = 1;; i++) {
            if (N % i == 0) {
               N /= i;
            }
            else {
              break;
            }
        }
 
        if (N == 1) {
            return 1;
        }
        else {
           return 0;
         }
    }
    
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isFactorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends