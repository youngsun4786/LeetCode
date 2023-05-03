#include<iostream>
#include<vector>
#include<map>
#include<stack>

//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> par_stack;
        std::map<char, char> parens = {{')', '('}, {']', '['}, {'}', '{'}};
        for (auto& c : s) {
            // checks if the following char key is in map
            if (parens.find(c) != parens.end()) {
                // if input starts with closing bracket
                if (par_stack.empty()) return false;

                // peek the latest parenthesis pushed onto stack
                if (par_stack.top() != parens[c]) return false;
                
                // if reaches here, means the parenthesis is correct order
                par_stack.pop(); 
            } else {
                par_stack.push(c);
            }
        }
        // if empty then all the parentheses have been correctly pushed and popped
        return par_stack.empty();
    }
};

int main() {
    Solution *sol = new Solution();
    std::string s = "()";

    bool res = sol->isValid(s);
    std::cout << res << std::endl;
    return 0;
}