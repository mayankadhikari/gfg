//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool check(string s) {
        // code here.
        return (s.find_first_not_of(s[0])==string::npos);
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends