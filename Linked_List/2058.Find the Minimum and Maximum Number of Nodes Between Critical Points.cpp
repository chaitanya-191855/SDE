class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> min;
        if(head->next->next==NULL){
            return {-1,-1};
        }
        ListNode *left=head;
        ListNode *dummy=head->next;
        ListNode *right=dummy->next;
        int i=2;
        while(right!=NULL){
            if(dummy->val>left->val && dummy->val>right->val){
                min.push_back(i);
            }else if(dummy->val<left->val && dummy->val<right->val){
                min.push_back(i);
            }
            left=left->next;
            dummy=dummy->next;
            right=right->next;
            i++;
        }
        int len=min.size();
        if(len==0 || len==1){
            return {-1,-1};
        }/*
        return {min[len-1]-min[len-2],min[len-1]-min[0]};
    */
         int small=INT_MAX; 
        for(int i=0;i<min.size()-1;i++)
        {
            if((abs(min[i]-min[i+1]))<small){
                small=abs(min[i]-min[i+1]);
            }
        }
        return {small,min[len-1]-min[0]};
    }
};
