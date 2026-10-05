/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

    vector<int> hasil = {};

    int total = 0;
    for(int i = 0; i < n; i++){
        total += nums[i];
        hasil.push_back(total);
        
    }
    return hasil;
        
    }
};
// @lc code=end

