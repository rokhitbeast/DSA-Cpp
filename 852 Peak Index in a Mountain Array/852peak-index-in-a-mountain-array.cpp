class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0,h=n-1;
        int ans=-1;
        
        while(l<=h){
            int mid=h+(l-h)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }
};