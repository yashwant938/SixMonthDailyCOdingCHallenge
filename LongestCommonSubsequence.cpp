// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         int cnt = 0;
//         int text12=text1.length();
//         int text22=text2.length();
//         if(text12>text22||text12==text22){
//         for (int i = 0; i < text1.size(); i++) {
//             for (int j = 0; j<text2.size(); j++) {
//                 if (text1[i] == text2[j]) {
//                     cnt++;
//                 }
//             }
//         }
//         }else {
//              for (int j = 0; j<text2.size(); j++) {
//              for (int i = 0; i < text1.size(); i++) {
//                 if (text1[j] == text2[i]) {
//                     cnt++;
//                 }
//             }
//         }
//         }
//         return cnt;
//     }
// };

class Solution {
public:
vector<vector<int>>dp;
string text1,text2;
int solve(int i,int j){
    if(i>=text1.size()||j>=text2.size()) return 0;
    if(dp[i][j]!=-1)    return dp[i][j];
    int ans=0;
    if(text1[i]==text2[j]){
        ans=1+solve(i+1,j+1);
    }else{
        ans=max(solve(i,j+1),solve(i+1,j));
    }
    return dp[i][j]=ans;
}
    int longestCommonSubsequence(string text1, string text2) {
      int n=text1.size(),m=text2.size();
      this->text1=text1;
      this->text2=text2;
      dp=vector<vector<int>>(n,vector<int>(m,-1));
    //   memset(dp,-1,sizeof(dp));
      return solve(0,0);  
    }
};