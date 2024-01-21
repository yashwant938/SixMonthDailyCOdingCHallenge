#include<bits/stdc++.h>
using namespace std;
int robHelp(vector<int>& nums, int index) {
    if (index < 0) {
        return 0;
    }
    int robCur = nums[index] + robHelp(nums, index - 2);
    int skipCur = robHelp(nums, index - 1);
    return max(robCur, skipCur);
}
int rob(vector<int>& nums) {
    int n = nums.size();
    return robHelp(nums, n - 1);
}
int main(){
    int n;
    cin>>n;
    int x;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
   int ans=rob(vec);
    cout<<ans<<endl;
}