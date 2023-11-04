#include<vector>
#include<iostream>
using namespace std;


uint32_t reverseBits(uint32_t n) {
    int left = 0;
    int right = 31;
    uint32_t reversed = 0;


    while (right >= 0) {
        if ((n & (1 << right)) != 0) {
            reversed = reversed | (1 << left);
        }
        ++left;
        --right;
    }
    return reversed;
}


uint32_t reverseBitsBetter(uint32_t n) {
    int right = 31;
    uint32_t reversed = 0;


    while (n != 0) {
        // mask the value first
        reversed += (n & 1) << right;
        // right shift by 1
        n = n >> 1;
        right--;
    }
    return reversed;
}


int main () {

    uint32_t n = 00000000000000000000000000001011;


    cout << reverseBitsBetter(n) << "\n";

    return 0;
}