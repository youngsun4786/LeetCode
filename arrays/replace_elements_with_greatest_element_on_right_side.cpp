#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> sol;
        if (arr.size() == 1)  {
            sol.push_back(-1);
            return sol;
        }


        for (int i = 0; i < arr.size() - 1; i++) {
            int max_ele = *max_element(arr.begin() + i, arr.end());
            sol.push_back(max_ele);
        }

        return sol;
    }
};


int main () {

    Solution *s = new Solution();
    
    return 0;
}


