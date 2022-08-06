#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largestNum = nums[0];
        int index;
        for (int & element : nums) {
            if (largestNum < element) {
                largestNum = element;
            }
        }
        for (int i = 0; i < nums.size(); ++i) {
            if ( nums[i] != largestNum && nums[i] * 2 > largestNum ) {
                return -1;
            } else if (nums[i] == largestNum) {
                index = i;
            }
        }
        return index;
    }
};




int main() {
    vector<int> vec1 = {3,6,1,0};
    Solution *sol = new Solution();
    int res = sol->dominantIndex(vec1);
    cout << res << endl;
    return 0;
}