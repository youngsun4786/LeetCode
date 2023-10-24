#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size() == 0) return "";

        if (strs.size() == 1) return strs[0];

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        //Finding the minimum length from first and last string
        int minimum = min(first.size(), last.size());
        
        int i = 0;
        while(i < minimum && first[i] == last[i]) i++;

        string pre = first.substr(0, i);
        return pre;
    }
};


int main() {



    return 0;
}