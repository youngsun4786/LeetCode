#include<vector>
#include<iostream>
using namespace std;


vector<int> countBits(int n) {
    vector<int> sol(n + 1);
    

    for (int i = 0; i < sol.size();  ++i) {
        int cnt = 0;
        uint32_t idx = i;
        while(idx != 0) {
            idx = idx & (idx - 1);
            cnt++;
        }
        sol[i] = cnt;
    }
    return sol;
}


vector<int> countBitsN(int n) {

    vector<int> sol(n + 1);
    // first number is always zero
    sol[0] = 0;
    for (int i = 1; i <= n; ++i) {
        sol[i] = sol[(i >> 1)] + i%2;
    }

    return sol;
}


int main () {



    vector<int> sol = countBitsN(5);

    for (int i = 0; i < sol.size(); ++i) {
        cout << sol[i] << " ";
    }

    return 0;
}