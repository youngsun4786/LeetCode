
#include<cmath>
#include<iostream>
using namespace std;
using std::vector;

int countDigit(int number) {
    return int(log10(number) + 1);
}
int findEvenNums(int num[], int size) {
    int evenNumDigit = 0;
    for (int i = 0; i < size; i++) {
        if (countDigit(num[i]) % 2 == 0) {
            evenNumDigit++;
        }
    }
    return evenNumDigit;
}


int main() {
    int arr[5] = {12,345,2,6,7896};

    int res = findEvenNums(arr, 5);
    cout << res << endl;
    return 0;
    
}