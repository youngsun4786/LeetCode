#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n; cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

    // moving all zeros to the end while keeping the numbers in order

    int right = 0;
    int left = 0;

    while(right < n) {
        if (a[right] != 0) {
            int tmp = a[right];
            a[right] = a[left];
            a[left] = tmp;
            left++;
        }

        right++;
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}