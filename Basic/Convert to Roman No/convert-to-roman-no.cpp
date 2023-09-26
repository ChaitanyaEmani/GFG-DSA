//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        string s;
        vector<string>nota = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>val = {1000,900, 500,400, 100,90, 50,40, 10,9, 5,4, 1};
        for(int i=0;n>0;i++){
            while(n>=val[i]){
                s = s+nota[i];
                n = n-val[i];
            }
        }
        
        return s;
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends