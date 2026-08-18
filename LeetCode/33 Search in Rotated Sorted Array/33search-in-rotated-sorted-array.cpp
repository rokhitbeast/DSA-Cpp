class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        
        while(l<=h){
            int mid=h+(l-h)/2;

            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid]>=nums[0]){
                if(nums[l]<=target && nums[mid]>target){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<target && nums[h]>=target){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};