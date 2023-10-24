#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int solIdx = 0;
        int dup = 1;
        
        if (nums.size() < 3) return nums.size();

        for (int i = 0; i < nums.size(); i++) {
            if ( i < nums.size() - 1 && nums[i] == nums[i + 1]) {
                dup++;
            }else if (nums[i] != nums[i + 1]) {
                dup = 1;
            }

            if (dup < 3) {
                nums[solIdx++] = nums[i];
            }
        }
        
        return solIdx;

    }
};

int main() {

    Solution *s = new Solution();
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(3);
    
    int r = s->removeDuplicates(v);
    cout << r << "\n";
    return 0;
}