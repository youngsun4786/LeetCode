#include<iostream>
#include<vector>
#include<list>

using namespace std;

class MyHashMap {
public:
    const int N = 10020;
    vector<list<pair<int, int>>> hm;

    MyHashMap() {
        hm = vector<list<pair<int, int>>>(N);
    }    
    list<pair<int, int>>::iterator find(int key) {
        int t = key % N;
        for(auto it = hm[t].begin(); it != hm[t].end(); it++) {
            if (it->first == key) return it;
        }
        return hm[t].end();
    }
    
    void put(int key, int value) {
        auto t = key % N;
        auto it = find(key);
        if (it != hm[t].end()) hm[t].push_back({key, value});
        else it->second = value;
    }
    
    int get(int key) {
        auto t = key % N;
        auto it = find(key);
        if (it != hm[t].end()) return it->second;

        return -1;
    }
    
    void remove(int key) {
        auto t = key % N;
        auto it = find(key);
        if (it != hm[t].end()) hm[t].erase(it);;
    }
};


int main() {

    MyHashMap *hm = new MyHashMap();

    return 0;
}