class Solution {
    int maxIndexDiff(int[] arr) {
        // code here
        int n=arr.length;
        int[] l=new int [n];
        int[] r=new int [n];
        l[0]=arr[0];
        
        for(int i=1;i<n;i++) l[i]=Math.min(arr[i],l[i-1]);
        
        r[n-1]=arr[n-1];
        for(int j=n-2;j>=0;j--) r[j]=Math.max(arr[j],r[j+1]);
        
        int i=0,j=0,maxD=-1;
        while(i<n && j<n){
            if(l[i]<=r[j]){
                maxD=Math.max(maxD,j-i);
                j++;
            }
            else i++;
        }
        return maxD;
    }
}