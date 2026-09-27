#include <vector>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();

        int total_sum = 0;
        for(int i = 0; i <n; i++){
            total_sum += nums[i];
        }

        int left_sum = 0;
        for(int i = 0; i < n; i++){
            int right_sum = total_sum - left_sum - nums[i];

            if (left_sum == right_sum){
                return i;
            }
            left_sum += nums[i];
        }

        return -1;
    }
};
// @lc code=end
int main() {
    Solution sol;
    vector<int> test = {2, 3, -1, 8, 4};
    cout << "Hasil indeks tengah: " << sol.findMiddleIndex(test) << endl;
    return 0;
    }