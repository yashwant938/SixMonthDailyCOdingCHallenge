#include<bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//  vector<int> findErrorNums(vector<int>& nums) {
//         int left=0;
//         vector<int>temp;
//         int right=nums.size()-1;
//     while (left <= right) {
//         if (nums[left] == nums[right]) {
//             temp.push_back(nums[left]);
//             if (left - 1 >= 0 && nums[left - 1] != left) {
//                 temp.push_back(left);
//             } else {
//                 temp.push_back(right + 1);
//             }
//             break;  
//         }
//         left++;
//         right--;
//     }

//     return temp;
// };
// // int main(){

// // }
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();       
        unordered_map<int, int>freq;
        for(int i =0; i< n ; i++){
            freq[nums[i]]++;
        }
        vector<int>ans(2);
        for(auto& i: freq){
            if(2==i.second){
                ans[0]=i.first;
                break;
            }
        }
        for(int i =1; i< n+1; i++){
            if(0 == freq[i]){
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};