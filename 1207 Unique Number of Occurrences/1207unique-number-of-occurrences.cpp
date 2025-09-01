class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;   // count occurrences
        for (int num : arr) {
            freq[num]++;
        }

        unordered_set<int> seen;       // store unique frequencies
        for (auto &p : freq) {
            if (seen.count(p.second))  // duplicate frequency found
                return false;
            seen.insert(p.second);
        }

        return true;
    }
};
