// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=DSASP-Arrays&batchId=154#
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        int m = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=m){
                m = a[i];
                v.push_back(a[i]);
            }
        }reverse(v.begin(),v.end());
        return v;

        
    }
};