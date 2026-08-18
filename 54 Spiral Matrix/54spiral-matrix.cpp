class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      vector<int> ans;
      int l=0,r=m-1,t=0,b=n-1;
      while(l<=r && t<=b){
        for(int j=l;j<=r;j++){
            ans.push_back(matrix[t][j]);
        }
        t++;
        if(l>r || t>b) break;
        for(int i=t;i<=b;i++){
            ans.push_back(matrix[i][r]);
        }
        r--;
        if(l>r || t>b) break;
        for(int j=r;j>=l;j--){
            ans.push_back(matrix[b][j]);
        }
        b--;
        if(l>r || t>b) break;
        for(int i=b;i>=t;i--){
            ans.push_back(matrix[i][l]);
        }
        l++;
        if(l>r || t>b) break;
      }
    return ans;
    }
};