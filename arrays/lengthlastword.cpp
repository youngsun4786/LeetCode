#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int wordCount = 0;
        bool found = false;

        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == ' ' && found) break;

            if (s[i] != ' ') {
                found = true;
                ++wordCount;
            }
        }

        return wordCount;
    }

};


int main() {

    Solution *s = new Solution();
    
    string ss = "some text    for you";

    int res = s->lengthOfLastWord(ss);
    cout << res << "\n";

}