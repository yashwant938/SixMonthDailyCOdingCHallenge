#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
 vector<int> findErrorNums(vector<int>& nums) {
        int left=0;
        vector<int>temp;
        int right=nums.size()-1;
    while (left <= right) {
        if (nums[left] == nums[right]) {
            temp.push_back(nums[left]);
            if (left - 1 >= 0 && nums[left - 1] != left) {
                temp.push_back(left);
            } else {
                temp.push_back(right + 1);
            }
            break;  
        }
        left++;
        right--;
    }

    return temp;
};
// int main(){

// }