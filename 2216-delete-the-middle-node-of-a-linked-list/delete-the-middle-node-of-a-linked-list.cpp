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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int N=0;
    
        while(temp!=NULL)
        {
            temp=temp->next;
            N++;
        }

        if(N==1)
        {
            head=NULL;
            return head;     
        }
        int mid=N/2;
        temp=head;
        for(int i=0;i<mid-1 && temp->next!=NULL;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};