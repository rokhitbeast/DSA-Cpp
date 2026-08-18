class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long n=nums.size();
        long long start=0,end=0;
        long long mid=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            start=max(start,(long long)nums[i]);
            end+=nums[i];
        }
        while(start<=end){
            if(k>n){
                return -1;
            }
            mid=start+(end-start)/2;
            int count=1;
            int pages=0;
            for(int i=0;i<n;i++){
                pages+=nums[i];
                if(pages>mid){
                    count++;
                    pages=nums[i];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};