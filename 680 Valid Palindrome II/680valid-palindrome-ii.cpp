class Solution {
public:

    bool isPalindromeRange(const string &s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n = s.size();
        int left=0,right=n-1;
        while(left<right){
            if(s[left]!=s[right]){
                return isPalindromeRange(s,left+1,right) ||
                       isPalindromeRange(s,left,right-1);
            }
            left++;
            right--; 
        }
        return true;
    }
};