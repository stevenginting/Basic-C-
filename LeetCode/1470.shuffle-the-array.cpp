/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

    vector<int> hasil = {};
    for(int i = 0; i < n; i++){
        hasil.push_back(nums[i]);
        hasil.push_back(nums[i + n]);
    }
    return hasil;
    }
};
// @lc code=end

