#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:

    stack<int> s;
    int res = 0;
    int calPoints(vector<string>& operations) {
        for (auto& op : operations) {
            // cout << "This is the op " << op << "\n";
            if (op.compare("+") == 0) {
                int tmp = s.top();
                s.pop();
                int sum = s.top() + tmp;
                s.push(tmp);
                s.push(sum);

            } else if (op.compare("C") == 0){
                s.pop();
            } else if (op.compare("D") == 0) {
                s.push(s.top() * 2);
            } else {
               s.push(stoi(op)); 
            }
        }

        while(!s.empty()) {
            res += s.top();
            s.pop();
        }
        return res;
    }
};


int main() {

    Solution *s = new Solution();
    vector<string> v;
    v.push_back("5");
    v.push_back("-2");
    v.push_back("4");
    v.push_back("C");
    v.push_back("D");
    v.push_back("9");
    v.push_back("+");
    v.push_back("+");

    int res = s->calPoints(v);
    cout << res << "\n";

    return 0;
}