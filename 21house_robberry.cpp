// #include<bits/stdc++.h>
// using namespace std;
// int robHelp(vector<int>& nums, int index) {
//     if (index < 0) {
//         return 0;
//     }
//     int robCur = nums[index] + robHelp(nums, index - 2);
//     int skipCur = robHelp(nums, index - 1);
//     return max(robCur, skipCur);
// }
// int rob(vector<int>& nums) {
//     int n = nums.size();
//     return robHelp(nums, n - 1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int x;
//     vector<int>vec;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         vec.push_back(x);
//     }
//    int ans=rob(vec);
//     cout<<ans<<endl;
// }
class Solution {
public:
int robHelp(vector<int>& nums, int i,vector<int>&dp) {
    if(i<0) {
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int robCur=nums[i]+robHelp(nums,i-2,dp);
    int skipCur=robHelp(nums,i-1,dp);
    dp[i]=max(robCur,skipCur);
    return dp[i];
}
    int rob(vector<int>& nums) {
        // int sum1=0,sum2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(i%2==0){
        //         sum1+=nums[i];
        //     }else{
        //         sum2+=nums[i];
        //     }
        // }
        // return max(sum1,sum2);
        int n=nums.size();
        vector<int>memo(n, -1);
        return robHelp(nums,n-1,memo);

    }
};

