#include<iostream>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:

    bool betterSolution(string s, string t) {
        unordered_map<char, vector<int>> m1;
        unordered_map<char, vector<int>> m2;

        for (int i = 0; i < s.length(); i++) {
            m1[s[i]].push_back(i);
            m2[t[i]].push_back(i);

            if (m1[s[i]] != m2[t[i]]) return false;
        } 

        return true;
    }
    bool isIsomorphic(string s, string t) {

        map<char, char> m;
        set<char> s1;
        set<char> s2;

        for (int i = 0; i < s.length(); i++) {
            s1.insert(s[i]);
            s2.insert(t[i]);
        }
        
        if (s1.size() != s2.size()) return false;
        
        for (int j = 0; j < s.length(); j++) {

            if (m.count(s[j]) && m.at(s[j]) != t[j]) return false;
            m.insert( pair<char, char>(s[j], t[j]) );
        }

        // for (int i = 0; i < s.length(); i++) {
            
        // }

        // for (auto i = m.begin(); i != m.end(); i++) {
        //     cout << i->first << " " << i->second << endl;
        // }

        return true;
    }
};

int main() {

    Solution *s = new Solution();

    string s1 = "badc";
    string s2 = "baba";

    cout << s->isIsomorphic(s1, s2) << endl;

    return 0;
}