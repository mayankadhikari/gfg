//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        vector<int> res;
        set<int> st;
        
        for(int i=0;i<a.size();i++){
            if(st.find(a[i])==st.end()){
                 st.insert(a[i]);
                 res.push_back(a[i]);
            }
            else continue;
        }
        for(int i=0;i<b.size();i++){
            if(st.find(b[i])==st.end()){
                st.insert(b[i]);
                res.push_back(b[i]);
            }
            else continue;
        }
        sort(res.begin(),res.end());
        return res;
        // return vector with correct order of elements
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends