#include<iostream>
#include<vector>
#include<set>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {

    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return false;
        
        ListNode *curr = head;
        ListNode *curr1 = head;
        while (curr1 != nullptr && curr1->next != nullptr) {
            curr = curr->next;
            curr1 = curr1->next->next;
            if (curr == curr1) return true;
        }
        return false;
    }
};


int main() {
    Solution *sol = new Solution();
    ListNode* head = new ListNode(3);
    ListNode* tp = new ListNode(2);
    ListNode * tp1 = new ListNode(0);
    ListNode * tp2 = new ListNode(-4);

    head->next = tp;
    tp->next = tp1;
    tp1->next = tp2;
    tp2->next = tp;

    bool res = sol->hasCycle(head);
    ListNode *curr = head;

    // while (curr != nullptr) {
    //     std::cout << curr->val << std::endl;
    //     curr = curr->next;
    // }

    std::cout << res << std::endl;
    return 0;
}

