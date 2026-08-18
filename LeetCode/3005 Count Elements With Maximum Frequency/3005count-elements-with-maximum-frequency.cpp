class Solution {
public:
int maxFrequencyElements(vector<int>& nums) {
        vector <int> frequency(101,0);
        int ans = 0;
        int max_freq = 0;
        for(auto x:nums){
            frequency[x]++;
            max_freq = max(max_freq,frequency[x]);
        }

        for(int i=1; i<=100; i++){
            if(frequency[i]==max_freq)
                ans++;
        }
        ans *= max_freq;
        return ans;
        
    }
};