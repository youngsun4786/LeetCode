
#include<vector>
#include<cmath>
#include<iostream>
using namespace std;
using std::vector;

int findMaxConsecutiveOnes(int nums[], int size) {

        // iterate through the array
        // have two variables that keeps track of consecutive digits
        int consecutiveNum = 0;
        int temp = 0;
        int maxNum = 0;
        for (int i = 0; i < size ; i++) {
            if (nums[i] == 1) {
                consecutiveNum++;
            } else if (nums[i] == 0) {
                temp = max(consecutiveNum, temp);
                consecutiveNum = 0;
            }
        }
        return max(temp, consecutiveNum);
}


int main() {
    int arr[6] = { 1,1,0,1,1,1 };
    int res = findMaxConsecutiveOnes(arr, 6);
    cout << res << endl;
    return 0;
    
}