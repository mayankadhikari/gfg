class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_set<int> s;
        for(int &i:arr) s.insert(i);
        vector<int> miss;
        for(int i=low;i<=high;i++){
            if(s.find(i)==s.end()) miss.push_back(i);
        }
        return miss;
    }
};