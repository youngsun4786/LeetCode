#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> >merge(vector<vector<int> >& intervals) {
    if (intervals.size() <= 1) return intervals;
    sort(intervals.begin(), intervals.end());
    vector<vector<int> > m;
    m.push_back(intervals[0]);
    for (int i = 0; i < intervals.size(); i++) {
        if (m.back()[1] >= intervals[i][0]) m.back()[1] = max(m.back()[1], intervals[i][1]);
        else {
            m.push_back(intervals[i]);
        }
    }

    bool backspaceCompare(string s, string t) {

        int i = s.length() - 1, j = t.length() - 1, back;
        while (true) {

        }
        
    }
    // for (int i = 0; i < intervals.size(); i++) {
    //     vector<int> t;
    //     if ( (i + 1) <= intervals.size() && (intervals[i][1] > intervals[i+1][0])) {
    //         cout << intervals[i][0] << " ";
    //         cout << intervals[i][1] << endl;
    //         // t.push_back(intervals[i][0]);
    //         // t.push_back(intervals[i+1][1]);
    //         m.push_back(t);

    //     // } else {
    //         // m.push_back(intervals[i]);
    //     }
    // }
    return m;
}


int main() {
//   char arr[20];
//   int i;
//   for (i =0; i < 10; i++) 
//     *(arr + i) = 65 +1;
//     *(arr + i) = 0;
//     cout << arr;
//     return 0;
    // char *ptr;
    // char str[] = "abcdefg";
    // ptr = str;
    // for (int i = 0; i < 5; i++) {
    //     cout << ptr << endl;
    //     ++ptr;
    // }
    vector<vector<int> > intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int> > a = merge(intervals);
    // ptr += 5;
    // cout << ptr;
    return 0;
}