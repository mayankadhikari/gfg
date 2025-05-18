//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxSum(vector<int>& arr) {
        // code here
        if(arr.size()<2) return -1;
        int res=arr[0]+arr[1];
        for(int i=1;i<arr.size()-1;i++) res=max(res,arr[i]+arr[i+1]);
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.maxSum(a);
        cout << res << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends