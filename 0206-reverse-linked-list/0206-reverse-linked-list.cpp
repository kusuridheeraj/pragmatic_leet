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
    ListNode* reverseList(ListNode* head) {
        vector<int>v;
        ListNode* temp_head = head;
        while(temp_head!=nullptr){
            v.push_back(temp_head->val);
            temp_head = temp_head -> next;
        }
        temp_head = head;
        int size = v.size()-1;
        while(size>=0){
            temp_head->val = v[size];
            size--;
            temp_head = temp_head -> next;
        }
        return head;

    }
};