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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int total=0;
        while(temp){
          total++;
          temp=temp->next;
        }

        if(n==total) return head->next;


        int x=0;

        ListNode* temp2=head;
        while(x<total-n-1){
            x++;
            temp2=temp2->next;
        }

        temp2->next=temp2->next->next;



        return head;


        


    }
};