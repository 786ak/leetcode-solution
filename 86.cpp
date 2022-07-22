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
    ListNode* partition(ListNode* head, int x) 
    {
        
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        //create two dummy nodes
        ListNode p(0),q(0);
        
        ListNode* t1=&p,*t2=&q,*cur=head;
        
        while(cur)
        {
            if(cur->val>=x)
            {
              //when value is larger append to list2
                t2->next=cur;
                t2=t2->next;
            }
            else 
            {
              //when value <x append to list1
                t1->next=cur; t1=t1->next;
            }
            cur=cur->next;
        }
      
        t2->next=NULL;     //make list2 point to NULL
        t1->next=q.next;   // append list1 to list2
        return p.next;      //return first list
    }
};
