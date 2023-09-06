#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size() * 2; 
        vector<int> res;

        for (int i = 0; i < len; i++) {
            res.push_back(nums[i % nums.size()]);
        }

        return res;
    }
};

int main() {
    Solution *s = new Solution();

    vector<int> nums;
    nums.push_back(1); nums.push_back(2); nums.push_back(1);

    vector<int> res = s->getConcatenation(nums);

    for (auto i : res) {
        cout << i << " ";
    }


    return 0;
}