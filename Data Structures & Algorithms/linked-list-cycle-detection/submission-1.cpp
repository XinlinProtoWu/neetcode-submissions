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

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head) {
            return false;
        }
        ListNode* node = head;
        unordered_map<ListNode*, int> cnt;
        while (node->next) {
            cnt[node]++;
            if (cnt[node] > 1) {
                return true;
            }
            node = node->next;
        }
        return false;
    }
};
