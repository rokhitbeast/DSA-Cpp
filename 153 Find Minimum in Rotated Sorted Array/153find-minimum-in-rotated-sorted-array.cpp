class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        int ans=nums[0];
        while(l<=h){
            int mid=h+(l-h)/2;
            if(nums[mid]>=nums[0]){
                l=mid+1;
            }
            else{
                ans=nums[mid];
                h=mid-1;
            }
        }
        return ans;
    }
};