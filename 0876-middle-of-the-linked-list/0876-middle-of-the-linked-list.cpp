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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* dummy = head;
        while(dummy != nullptr){
            dummy = dummy -> next;
            length++;
        }
        dummy = head;
        length=length/2;
        while(length>0){
            dummy = dummy ->next;
            length--;
        }
        return dummy;
    }
};