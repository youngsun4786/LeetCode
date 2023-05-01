#include <iostream>
#include <vector>

class Solution {
public:
    bool valid_palindrome(std::string s) {
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());

        std::string tmp = "";
        // appendingx non alpha numeric characters and converting to lower
        for (auto&c : s) {
            c = std::tolower(c);
            if (std::isalnum(c)) tmp += c;    
        }
        // compare i and len - i characters of a string
        for (int i = 0; i < tmp.size()/2; i++) {
            if (tmp[i] != tmp[tmp.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};


int main() {
    Solution *sol = new Solution();
    std::string tmp = "A man, a plan, a canal: Panama";
    std::cout << tmp.size() << std::endl;

    bool res = sol->valid_palindrome(tmp);
    std::cout << res << std::endl;
    return 0;
}