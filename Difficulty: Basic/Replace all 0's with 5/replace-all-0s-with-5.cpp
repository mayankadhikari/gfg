//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string temp=to_string(n)+ "";
        replace(temp.begin(),temp.end(),'0','5');
        return stoi(temp);
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends