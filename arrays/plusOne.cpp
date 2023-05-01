#include<vector>
#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int value = 0;
        vector<int> vec;

        // just start iterating from end -> this way once you increment, just return the array
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (++digits[i] < 10) {
                return digits;
            }
            digits[i] = 0;
        }

        // case when if the number is 9
        digits[0] = 1;
        digits.emplace_back(0);
        return digits;
   
    }
};


int main() {

    vector<int> vec = {4,3,2,1};
    Solution *sol = new Solution();
    vector<int> solVec = sol->plusOne(vec);

    for (int element : solVec) {
        cout << " " << element;
    }
    cout << endl;

}