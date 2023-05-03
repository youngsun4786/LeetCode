#include<iostream>
#include<vector>

//https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (high + low)/2;
            if (nums[mid] == target) {
                return mid;
            } else {
                if (nums[mid] < target) {
                    low = mid + 1; // add 1 to avoid current middle value
                }else if (nums[mid] > target) {
                    high = mid - 1; // subtract 1 to avoid curent middle value
                } else {
                    return - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution *sol = new Solution();
    std::vector<int> v({-1,0,3,5,9,12});
    int target = 9;

    int res = sol->search(v, target);
    std::cout << res << std::endl;
    return 0;
}