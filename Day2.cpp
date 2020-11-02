//Day 2
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
    void insert(ListNode *&head,ListNode *&node){
        if(head==NULL or head->val>node->val){
            node->next = head;
            head = node;
        }
        else{
            ListNode *curr = head,*prev=NULL;
            while(curr and curr->val<=node->val){
                prev = curr;
                curr = curr->next;
            }
            prev->next=node;
            node->next=curr;
        }
    }
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode *answer = NULL;
        ListNode *t = head;
        while(t){
            ListNode *prev = t;
            t = t->next;
            prev->next=NULL;
            insert(answer,prev);
        }
        return answer;
    }
};
