#include<vector>
#include<iostream>
using namespace std;

int singleNumber(vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); ++i) {
        res ^= nums[i];
    }
    return res;
}


int main () {

    return 0;
}