#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;

        for (int& element : nums) {
            rightSum += element;
        }

        for (int i = 0; i < nums.size(); ++i) {

            if (leftSum == rightSum - nums[i] - leftSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};



int main() {

    vector<int> vec1 = {1,7,3,6,5,6}; 
    Solution * sol = new Solution();
    int res = sol->pivotIndex(vec1);
    cout << res << endl;
    delete sol;

}