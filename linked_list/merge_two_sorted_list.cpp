#include<iostream>
#include<vector>

struct ListNode {

    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // iterate the linked list1 to the end
        // set the next pointer of the last node to the head of linked list2
        if (list1 == nullptr && list2 == nullptr) return nullptr;

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* curr = list1;
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = list2;

        // sorting (swap values) the combined list
        ListNode* current = list1, *next = nullptr;
        int data = 0;
        while (current != nullptr) {
            // set the next to current->next
            next = current->next;
            while(next != nullptr) {
                //If current node's data is greater than next's node data, swap the data between them  
                if (next->val < current->val) {
                    data = current->val;
                    current->val = next->val;
                    next->val = data;
                }
                next = next->next;
            }
            current = current->next;
        }
        return list1;
    }
};

int main() {
    Solution *sol = new Solution();

    ListNode* head = new ListNode(1);
    ListNode* tp = new ListNode(2);
    ListNode * tp1 = new ListNode(4);
    head->next = tp;
    head->next->next = tp1;

    ListNode* head1 = new ListNode(1);
    ListNode* tp2 = new ListNode(3);
    ListNode * tp3 = new ListNode(4);
    head1->next = tp2;
    head1->next->next = tp3;

    ListNode* res = sol->mergeTwoLists(head, head1);
    ListNode* curr = res;
    while(curr != nullptr) {
        std::cout << curr->val << std::endl;
        curr = curr->next;
    }
    return 0;
}
