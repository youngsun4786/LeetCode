#include<iostream>
#include<vector>

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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* curr = head; // pointer to current node
        ListNode* prev = nullptr; // pointer to previous node
        ListNode* next = nullptr; // pointer to next node

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};


int main() {
    Solution *sol = new Solution();
    ListNode* head = new ListNode(1);
    ListNode* tp = new ListNode(2);
    ListNode * tp1 = new ListNode(3);
    head->next = tp;
    tp->next = tp1;

    ListNode* res = sol->reverseList(head);
    ListNode* curr = res;
    while(curr != nullptr) {
        std::cout << curr->val << std::endl;
        curr = curr->next;
    }
    return 0;
}


