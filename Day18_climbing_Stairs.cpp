class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1){
            return 1 ;
        }
        vector<int>dp(n+1);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
// class Solution {
// public:
//     int climbStairs(int n) {
//         // vector<int>()
//         // ClimbingStaring(n,dp);
//         if(n==0){
//             return 1;

//         }
//         if(n==1){
//             return 1;

//         }
//         int first=1,second=1;
//         // int third;
//         for(int i=2;i<=n;i++){
//             // third=first+second;
//             // cout<<third;
//             // first=second;
//             // second=third;
//             int temp=second;
//             second=first+second;
//             first=temp;


//         }
//     // return;
//     return second;
//     }
// };