//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int max_idx=n-1,min_idx=0;
        
        int max_elem=arr[n-1]+1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]+=(arr[max_idx]%max_elem)*max_elem;
                max_idx--;
            }
            else{
                arr[i]+=(arr[min_idx]%max_elem)*max_elem;
                min_idx++;
            }
        }
        for(int i=0;i<n;i++) arr[i]=arr[i]/max_elem;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends