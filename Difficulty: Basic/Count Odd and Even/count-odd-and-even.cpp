class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int ecount=0,ocount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0) ecount++;
            else ocount++;
        }
        return {ocount,ecount};
    }
};