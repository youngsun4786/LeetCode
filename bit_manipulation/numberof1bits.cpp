#include<vector>
#include<iostream>
using namespace std;


int hammingWeight(uint32_t n) {
    int cnt = 0;
    while (n != 0) {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}
int main () {

    uint32_t n = 00000000000000000000000000001011;

    int res = hammingWeight(n);

    cout << res << "\n";

    return 0;
}