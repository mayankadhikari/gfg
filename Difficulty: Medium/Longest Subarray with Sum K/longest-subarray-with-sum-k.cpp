//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mp;
        int res=0;
        int prefsum=0;
        
        for(int i=0;i<arr.size();++i){
            prefsum+=arr[i];
            if(prefsum==k) res=i+1;
            else if(mp.find(prefsum-k)!=mp.end()) res=max(res,i-mp[prefsum-k]);
            
            if(mp.find(prefsum)==mp.end()) mp[prefsum]=i;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends