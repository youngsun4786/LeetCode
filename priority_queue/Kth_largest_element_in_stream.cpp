#include<iostream>
#include<vector>
#include<queue>

class KthLargest {
public:
    KthLargest(int k, std::vector<int>& nums) {
        this->k = k;
        for (int i = 0; i < nums.size(); i++) {
            this->pq.push(nums[i]);
        }
        while(pq.size() > this->k) {
            pq.pop();
        }

    }
    int add(int val) {
        this->pq.push(val);
        if (pq.size() > this->k) {
            pq.pop();
        }
        return pq.top();
    }
private:
    int k;
    std::priority_queue<int, std::vector<int>, std::greater<int> > pq;
};

int main() {
    std::vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(2);
    KthLargest* obj = new KthLargest(3, nums);
    int param_1 = obj->add(3);
    int param_2 = obj->add(5);
    int param_3 = obj->add(10);
    int param_4 = obj->add(9);

    std::cout << param_1 << "\n";
    std::cout << param_2 << "\n";
    std::cout << param_3 << "\n";
    std::cout << param_4 << "\n";

}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */