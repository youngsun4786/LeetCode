#include<queue>
#include<vector>
#include<iostream>

using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int> > q;
    
    vector<int> v;

    v.push_back(1);
    v.push_back(10);
    v.push_back(8);
    v.push_back(14);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);

    for (int i = 0; i < v.size(); ++i) {
        q.push(v[i]);
    }

    vector<int> res(v.size());

    for (int i = 0; i < v.size(); ++i) {
        res[i] = q.top();
        q.pop();
    }

    for (auto &val : res) {
        cout << val << " ";
    }

    return 0;
}

