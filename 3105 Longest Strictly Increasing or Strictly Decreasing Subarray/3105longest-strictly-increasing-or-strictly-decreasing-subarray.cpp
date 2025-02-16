class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if (n == 1) return 1; // Edge case: single element
        int count1=1,count2=1;
        int max1=1,max2=1;
        for(int i=0;i<n-1;i++){
                if(nums[i+1]>nums[i]){
                    count1++;
                    max1= max(max1,count1);
                }
                else{
                    count1=1;
                }
                if(nums[i+1]<nums[i]){
                    count2++;
                    max2=max(max2,count2);
                }
                else{count2=1;}
        }
       
        if(max1>max2){
            return max1;}
            else {return max2;}
  
    }
};