#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int cnt = 1;
        vector<int> v;

        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;

        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i + 1] - nums[i] == 1){
                cnt++;
            } else {
                v.push_back(cnt);
                cnt = 1;
            }
        }
        int max = *max_element(v.begin(), v.end());
        return max;
    }
};

int main () {

    Solution *s = new Solution();
    vector<int> v; 

    int a[] = {0,3,7,2,5,8,4,6,0,1};

    int len = sizeof(a)/sizeof(int);
    for (int i = 0; i < len; i++) {
        v.push_back(a[i]);
    }
    int res = s->longestConsecutive(v);
    cout << res;
    return 0;
}