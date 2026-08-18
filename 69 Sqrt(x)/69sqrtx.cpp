class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        int ans=0;
        while(l<=h){

            int mid=h+(l-h)/2;
            if(x<2){
                return x;
            }
            if(mid==x/mid){
                return mid;
            }

            else if(mid<x/mid){
                ans=mid;
                l=mid+1;

            }

            else{
                h=mid-1;
            }
        }
        return ans;
    }
};