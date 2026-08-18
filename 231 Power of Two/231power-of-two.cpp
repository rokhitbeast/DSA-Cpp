class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n%2!=0){
            if(n==1)    return true;
            return false;
        }
        return isPowerOfTwo(n/2);
    }
};