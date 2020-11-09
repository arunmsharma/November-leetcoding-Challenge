//Day 7
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL;
        stack<int>st1,st2;
        while(l1){
            st1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            st2.push(l2->val);
            l2=l2->next;
        }
        int val=0;
        while(st1.empty()==false or st2.empty()==false){
            if(st1.empty()==false){
                val += st1.top();
                st1.pop();
            }
            if(st2.empty()==false){
                val += st2.top();
                st2.pop();
            }
            res = new ListNode(val%10,res);
            val/=10;
        }
        return val>0?new ListNode(val,res):res;   
    }
};
