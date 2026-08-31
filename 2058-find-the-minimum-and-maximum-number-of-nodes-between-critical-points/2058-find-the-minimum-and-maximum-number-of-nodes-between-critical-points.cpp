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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       ListNode*temp=head;

       int count=0;
       while(temp){
        count++;
        temp=temp->next;
       }
       

       if(count<3) return {-1,-1};

       ListNode*curr=head->next;
       ListNode*nex=head->next->next;
       ListNode*prev=head;

       vector<int>v;
       count=1;

       while(nex){

         count++;
         if((curr->val < nex->val && curr->val< prev->val) || (curr->val > nex->val && curr->val > prev->val)){
             v.push_back(count);
         }

         if(nex==NULL) break;

         prev=prev->next;
         curr=curr->next;
         nex=nex->next;


       }
       if (v.size() < 2) return {-1, -1};

       
       int maxi= abs(v[0] - v[v.size()-1]);
       int mini=INT_MAX;
       for(int i=0;i<v.size()-1;i++){
            mini=min(mini, abs(v[i]-v[i+1]) );
       } 






    return{mini,maxi};    
    }
};