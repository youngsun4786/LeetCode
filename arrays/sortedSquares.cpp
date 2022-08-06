
#include<cmath>
#include<iostream>
using namespace std;
using std::vector;
using std::sort;

//function that finds number of even number of digits
 int* sortedSquares(int num[], int size, int temp[]) {
    for (int i = 0; i < size; i++) {
        temp[i] = int(pow(num[i], 2));
    }
    return temp;
}


int main() {
    int arr[5] = {-4,-1,0,3,10};
    int tempArr[5];
    int* newArr = sortedSquares(arr, 5, tempArr);
    for (int i = 0; i < 5; i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
    
}