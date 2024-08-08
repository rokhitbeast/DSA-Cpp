class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        for(int i=1 ; i<=min(a,b) ; i++) {
			/*
			If i can divide both a and b, then i is a common factor
			*/
			if(a%i==0 && b%i==0) ans++;
		}
		return ans;
    }
};