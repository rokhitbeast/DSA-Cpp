class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      unordered_map<int , int>mp;
        int res = 0;
        for(int i : nums){
            res+=mp[i];
            mp[i]++;
        }
        return res;   
    }
};